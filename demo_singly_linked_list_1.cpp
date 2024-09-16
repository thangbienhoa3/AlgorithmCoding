#include <iostream>


using namespace std;


struct Node
{
    int data;
    Node *next;
};
struct sll
{
    Node *head;
    Node *tail;
};
void create_list(sll *list)
{
    list->head = new Node;
    list->tail = new Node;
    cin >> list->head->data;
    list->head->next = list->tail;
    cin >> list->tail->data;
    list->tail->next = NULL;
}
void insert_at_front(sll *list,int new_data)
{
    Node *n;
    n = new Node;
    n->data = new_data;
    n->next = NULL;
    if(list->head != NULL)
    {
        n->next = list->head;
        list->head = n;
    }
    if(list->head == NULL)
    {
        list->head = n;
        list->tail = n;
    }
}
void insert_at_po(sll *list,int po,int new_data)
{
    Node *n;
    Node *temp;
    temp = new Node;
    temp->next = list->head->next;
    n = new Node;
    n->data = new_data;
    n->next = NULL;
    for(int i = 0;i < po;i++)
    {
        if(i == po - 1)
        {
            n->next = temp->next;
            temp->next = n;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    
}
void print_list(sll *list)
{
    Node *n = list->head;
    while(n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
int main()
{
    sll *list1;
    list1 = new sll;
    create_list(list1);
    insert_at_front(list1,6);
    insert_at_front(list1,6);
    insert_at_front(list1,6);
    insert_at_po(list1,3,12);
    print_list(list1);
}