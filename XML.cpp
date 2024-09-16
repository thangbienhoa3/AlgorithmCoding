#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Định nghĩa cấu trúc để lưu trữ thuộc tính của thẻ
typedef struct Attribute
{
    char *name;
    char *value;
    struct Attribute *next;
} Attribute;

// Định nghĩa cấu trúc nút cây tổng quát cho thẻ HTML
typedef struct TreeNode
{
    char *tag_name;
    Attribute *attributes;
    char *text;
    struct TreeNode *first_child;
    struct TreeNode *next_sibling;
    struct TreeNode *parent;
} TreeNode;

// Hàm tạo một thuộc tính mới
Attribute *create_attribute(char *name, char *value)
{
    Attribute *attr = (Attribute *)malloc(sizeof(Attribute));
    attr->name = strdup(name);
    attr->value = strdup(value);
    attr->next = NULL;
    return attr;
}

// Hàm tạo một nút cây mới
TreeNode *create_tree_node(char *tag_name, char *text, TreeNode *parent)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->tag_name = strdup(tag_name);
    node->attributes = NULL;
    node->text = text ? strdup(text) : NULL;
    node->first_child = NULL;
    node->next_sibling = NULL;
    node->parent = parent;
    return node;
}

// Hàm thêm một thuộc tính vào nút
void add_attribute(TreeNode *node, char *name, char *value)
{
    Attribute *attr = create_attribute(name, value);
    attr->next = node->attributes;
    node->attributes = attr;
}

// Hàm thêm một nút con vào nút cha
void add_child(TreeNode *parent, TreeNode *child)
{
    if (parent->first_child == NULL)
    {
        parent->first_child = child;
    }
    else
    {
        TreeNode *sibling = parent->first_child;
        while (sibling->next_sibling != NULL)
        {
            sibling = sibling->next_sibling;
        }
        sibling->next_sibling = child;
    }
}

// Hàm giải phóng bộ nhớ của cây
void free_tree(TreeNode *node)
{
    if (node == NULL)
        return;
    free_tree(node->first_child);
    free_tree(node->next_sibling);
    free(node->tag_name);
    if (node->text)
        free(node->text);
    Attribute *attr = node->attributes;
    while (attr != NULL)
    {
        Attribute *next = attr->next;
        free(attr->name);
        free(attr->value);
        free(attr);
        attr = next;
    }
    free(node);
}

// Hàm đọc đến ký tự delimiter và trả về chuỗi kết quả
char *read_until(const char **str, char delimiter)
{
    int capacity = 10;
    char *buffer = (char *)malloc(capacity);
    int length = 0;
    char ch;
    while ((ch = **str) != '\0' && ch != delimiter)
    {
        if (length + 1 >= capacity)
        {
            capacity *= 2;
            buffer = (char *)realloc(buffer, capacity);
        }
        buffer[length++] = ch;
        (*str)++;
    }
    if (ch == delimiter)
    {
        (*str)++;
    }
    buffer[length] = '\0';
    return buffer;
}

// Hàm xoá các ký tự xuống dòng và các ký tự cách trống đầu, cuối trong chuỗi
void remove_newlines(char *str)
{
    char *start = str, *end;
    while (*start == ' ' || *start == '\n')
        start++;
    if (*start == '\0')
    {
        *str = '\0';
        return;
    }
    end = start + strlen(start) - 1;
    while (end > start && (*end == ' ' || *end == '\n'))
        end--;
    // *(end + 1) = '\0' Đặt cuối chuỗi là null
    *(end + 1) = '\0';
    // +2 vì thêm cả null
    memmove(str, start, end - start + 2);
}

// Hàm kiểm tra thẻ tự đóng
int is_self_closing_tag(const char *tag_name)
{
    // for futher implementation
    return strcmp(tag_name, "br") == 0 || strcmp(tag_name, "img") == 0 ||
           strcmp(tag_name, "input") == 0 || strcmp(tag_name, "hr") == 0 ||
           strcmp(tag_name, "meta") == 0 || strcmp(tag_name, "link") == 0 ||
           strcmp(tag_name, "base") == 0 || strcmp(tag_name, "col") == 0 ||
           strcmp(tag_name, "embed") == 0 || strcmp(tag_name, "track") == 0 ||
           strcmp(tag_name, "wbr") == 0 || strcmp(tag_name, "area") == 0;
}

// Hàm in cây theo cấu trúc cây tổng quát
void print_tree(TreeNode *node, int depth)
{
    if (node == NULL)
        return;
    for (int i = 0; i < depth; i++)
        printf("  ");
    printf("<%s", node->tag_name);
    Attribute *attr = node->attributes;
    while (attr != NULL)
    {
        printf(" %s=\"%s\"", attr->name, attr->value);
        attr = attr->next;
    }
    printf(">");
    bool isContainText = false;
    if (node->text)
    {
        printf("%s", node->text);
        isContainText = true;
    }
    else
        printf("\n");

    print_tree(node->first_child, depth + 1);

    if (!is_self_closing_tag(node->tag_name))
    {
        if (!isContainText)
            for (int i = 0; i < depth; i++)
                printf("  ");
        printf("</%s>\n", node->tag_name);
    }

    print_tree(node->next_sibling, depth);
}

// Hàm phân tích thẻ HTML và tạo cây
TreeNode *parse_html(const char *str)
{
    TreeNode *root = NULL;
    TreeNode *curr = NULL;
    const char *p = str;
    while (*p != '\n')
        p++; // bỏ dòng đầu tiên
    p++;
    while (*p != '\0')
    {
        while (*p == ' ' || *p == '\n')
            p++;
        if (*p == '<')
        {
            p++;
            if (*p != '/') // thẻ mở
            {
                char *text_name = read_until(&p, '>');
                char *tag_name = NULL;
                char *attr_name = NULL;
                char *attr_value = NULL;
                const char *temp = text_name;
                if (*(temp + strlen(temp) - 1) == '"')
                {
                    tag_name = read_until(&temp, ' ');
                    attr_name = read_until(&temp, '=');
                    temp++;
                    attr_value = read_until(&temp, '"');
                }
                else
                    tag_name = text_name;
                TreeNode *new_node = create_tree_node(tag_name, NULL, curr);
                if (attr_name && attr_value)
                    add_attribute(new_node, attr_name, attr_valif (curr == NULL)
                    root = new_node;
                else
                    add_child(curr, new_node);
                curr = new_node;
                if (*(p - 1) == '/') // thẻ tự đóng
                {
                    p++;
                    curr = curr->parent;
                }
            }
            else // thẻ đóng
            {
                p++;
                char *tag_name = read_until(&p, '>'); // skip
                if (curr && curr->parent && strcmp(tag_name, curr->tag_name) == 0)
                    curr = curr->parent;
            }
        }
        else // text
        {
            char *text = read_until(&p, '<');
            remove_newlines(text);
            if (*text)
                curr->text = text;
            p--;
        }
    }
    return root;
}

// Hàm đọc toàn bộ đầu vào từ bàn phím cho đến ^
char *read_all_input()
{
    size_t capacity = 1024;
    char *buffer = (char *)malloc(capacity);
    size_t length = 0;
    int ch;
    while ((ch = getchar()) != '^')
    {
        if (length + 1 >= capacity)
        {
            capacity *= 2;
            buffer = (char *)realloc(buffer, capacity);
        }
        buffer[length++] = ch;
    }
    buffer[length] = '\0';
    return buffer;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    TNODE* root = NULL;
    char nextCommand[100];
    char *html_content = read_all_input();
    TreeNode *root = parse_html(html_content);
    if (root)
    {
        print_tree(root, 0);
        free_tree(root);
    }
    else
    {
        printf("Failed to parse XML.\n");
    }
    return EXIT_SUCCESS;
}