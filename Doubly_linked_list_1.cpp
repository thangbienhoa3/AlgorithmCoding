#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

node *add_node_at_first(int new_data,node *head)
{   
    node *tmp = new node;
    tmp->data = new_data;
    tmp->prev = NULL;
    if(head != NULL)
    {
        tmp->next = head;
        head->prev = tmp;
    }
    head = tmp;
    return head;
}
node *add_node_at_last(int new_data,node *tail)
{
    node *tmp = new node;
    tmp->data = new_data;
    tmp->next = NULL;
    if(tail != NULL)
    {
        tmp->prev = tail;
        tail->next = tmp;
    }
    tail = tmp;
    return tail;
}
node *add_node_after_node(int new_data,int po,node *head,node *tail)
{
    node *tmp = new node;
    tmp = head;
    for(int i = 1; i < po && tmp != NULL;i++) tmp = tmp->next;
    if(tmp != NULL)
    {
        node *new_node = new node;
        new_node->data = new_data;
        new_node->prev = tmp;
        new_node->next = tmp->next;
        tmp->next = new_node;
        return new_node;
    }
    return add_node_at_last(new_data,tail);
}
void delete_node(int po,node *head,node *tail)
{
    node *tmp = new node;
    tmp = head;
    for(int i = 1; i < po && tmp != NULL;i++) tmp = tmp->next;
    if(tmp != NULL)
    {
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
    }
}
void print(node *head)
{   
    node *tmp = new node;
    tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node;
    node *tail = new node;

    head->prev = NULL;
    head->next = tail;
    head->data = 100;
    
    tail->prev = head;
    tail->next = NULL;
    tail->data = 150;  

    head = add_node_at_first(200,head);
    print(head);
    add_node_after_node(250,6,head,tail);
    print(head);
    delete_node(2,head,tail);
    print(head);


}