#include <bits/stdc++.h>
using namespace std;
// Định nghĩa cấu trúc để lưu trữ thuộc tính của thẻ
typedef struct Attribute {
    char* name;
    char* value;
    struct Attribute* next;
} Attribute;

// Định nghĩa cấu trúc nút cây tổng quát cho thẻ HTML
typedef struct TreeNode {
    char* tag_name;
    Attribute* attributes;
    char* text;
    struct TreeNode* first_child;
    struct TreeNode* next_sibling;
    struct TreeNode* parent;
} TreeNode;

// Hàm tạo một thuộc tính mới
Attribute* create_attribute(char* name, char* value) {
    Attribute* attr = (Attribute*)malloc(sizeof(Attribute));
    attr->name = strdup(name);
    attr->value = strdup(value);
    attr->next = NULL;
    return attr;
}

// Hàm tạo một nút cây mới
TreeNode* create_tree_node(char* tag_name, char* text, TreeNode* parent) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->tag_name = strdup(tag_name);
    node->attributes = NULL;
    node->text = text ? strdup(text) : NULL;
    node->first_child = NULL;
    node->next_sibling = NULL;
    node->parent = parent;
    return node;
}

// Hàm thêm một thuộc tính vào nút
void add_attribute(TreeNode* node, char* name, char* value) {
    Attribute* attr = create_attribute(name, value);
    attr->next = node->attributes;
    node->attributes = attr;
}

// Hàm thêm một nút con vào nút cha
void add_child(TreeNode* parent, TreeNode* child) {
    if (parent->first_child == NULL) {
        parent->first_child = child;
    }
    else {
        TreeNode* sibling = parent->first_child;
        while (sibling->next_sibling != NULL) {
            sibling = sibling->next_sibling;
        }
        sibling->next_sibling = child;
    }
}


// Hàm giải phóng bộ nhớ của cây
void free_tree(TreeNode* node) {
    if (node == NULL) return;
    free_tree(node->first_child);
    free_tree(node->next_sibling);
    free(node->tag_name);
    if (node->text) free(node->text);
    Attribute* attr = node->attributes;
    while (attr != NULL) {
        Attribute* next = attr->next;
        free(attr->name);
        free(attr->value);
        free(attr);
        attr = next;
    }
    free(node);
}

// Hàm đọc đến ký tự delimiter và trả về chuỗi kết quả
char* read_until(const char** str, char delimiter) {
    int capacity = 10;
    char* buffer = (char*)malloc(capacity);
    int length = 0;
    char ch;
    while ((ch = **str) != '\0' && ch != delimiter) {
        if (length + 1 >= capacity) {
            capacity *= 2;
            buffer = (char*)realloc(buffer, capacity);
        }
        buffer[length++] = ch;
        (*str)++;
    }
    if (ch == delimiter) {
        (*str)++;
    }
    buffer[length] = '\0';
    return buffer;
}

// Hàm xoá các ký tự xuống dòng và các ký tự cách trống đầu, cuối trong chuỗi
void remove_newlines(char* str) {
    // CODE tiếp tại đây
    
}

// Hàm kiểm tra thẻ tự đóng
int is_self_closing_tag(const char* tag_name) {
    // for futher implementation
    return 0;
}

// Hàm in cây theo cấu trúc cây tổng quát
void print_tree(TreeNode* node, int depth) {
    if (node == NULL) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("<%s", node->tag_name);
    Attribute* attr = node->attributes;
    while (attr != NULL) {
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
        
    if (!is_self_closing_tag(node->tag_name)) {
        if(!isContainText) for (int i = 0; i < depth; i++) printf("  ");
        printf("</%s>\n", node->tag_name);
    }
        

    print_tree(node->next_sibling, depth);
}

// Hàm phân tích thẻ HTML và tạo cây
TreeNode* parse_html(const char* str) {
    TreeNode* root = NULL; 
    // CODE tiếp tại đây
    string s = "",res = "";
    for(int i = 0;str[i] != '\0';i++){
    		s += str[i];
    }
    stringstream ss(s);
    vector <string> v;
    string tmp;
    while(ss >> tmp) v.push_back(tmp);
    for(int i = 0;i < v.size();i++){
    	res += v[i];
    }
    for(int i = 0;i < res.lenth();i++){
    	string tmp = 
    }
    return root;
}


// Hàm đọc toàn bộ đầu vào từ bàn phím cho đến ^
char* read_all_input() {
    size_t capacity = 1024;
    char* buffer = (char*)malloc(capacity);
    size_t length = 0;

    int ch;
    while ((ch = getchar()) != '^') {
        if (length + 1 >= capacity) {
            capacity *= 2;
            buffer = (char*)realloc(buffer, capacity);
        }
        buffer[length++] = ch;
    }
    buffer[length] = '\0';
    return buffer;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	char* html_content = read_all_input();
    TreeNode* root = parse_html(html_content);

    if (root) {
        print_tree(root, 0);
        free_tree(root);
    }
    else {
        printf("Failed to parse XML.\n");
    }

    return EXIT_SUCCESS;
   
}
