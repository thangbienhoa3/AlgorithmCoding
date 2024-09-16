#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *create_node(int new_data)// tạo node mới
{
    Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}
struct linked_list
{
    Node *head;
    Node *tail;
};
void create_list(linked_list *list)
{
    list->head = NULL;
    list->tail = NULL;
}
/*void insert_at_front(linked_list *list,Node *node)// node mang data và cái link tới thằng tiếp theo;
{
    if(list->head == NULL)
    {
        list->head = node;
        list->tail = node;
    }
    else
    {
        node->next = list->head;
        list->head = node;
    }
}*/
void insert_at_front(linked_list *list,int new_data)
{
    Node *new_node = create_node(new_data);
    if(list == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        new_node->next = list->head;
        list->head = new_node;
    }
}
void insert_at_back(linked_list *list,int new_data)
{
    Node *new_node = create_node(new_data);
    if(list == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        list->tail->next = new_node;
        list->tail = new_node;
    }
}
void insert_after(linked_list *list,int new_data,Node *q)
{
    Node *new_node = create_node(new_data);
    if(q != NULL)
    {
        new_node->next = q->next;
        q->next = new_node;
    }
}
void remove_at_front(linked_list *list)
{
    if(list->head != NULL)
    {
        list->head = list->head->next;
    }
}
void remove_at_Node(linked_list *list,int po)
{   
    Node *curr = list->head;
    Node *prev = list->head;

    for(int i = 0;i < po;i++)
    {
        if(i == 0 && po == 1)
        {
            list->head = list->head->next;
        }
        else
        {
            if(i == po - 1 && curr)
            {
                prev->next = curr->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }
}
int main()
{
    linked_list *list1;
    list1 = new linked_list;
    create_list(list1);

}
