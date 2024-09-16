#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node * create_new_node(int data);
void push_at_front(node **head,int data);
void print(node *head);
void delete_node(node **head,int k);

int main(){
    node *head = NULL;
    push_at_front(&head,1);
    push_at_front(&head,2);
    push_at_front(&head,3);
    push_at_front(&head,4);
    push_at_front(&head,5);
    // 5 4 3 2 1
    delete_node(&head,3);
    // 5 4 2 1
    print(head);

}
node * create_new_node(int data){
    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void push_at_front(node **head,int data){
    node *new_node = create_new_node(data);
    if(*head == NULL){
        *head = new_node;
    }
    else{
        new_node->next = *head;
        *head = new_node;
    }
}
void delete_node(node **head,int k){
    node *tmp = *head;
    int cnt = 1;
    while(tmp != NULL && cnt < k - 1){
        tmp = tmp->next;
        cnt++;
    }
    if(tmp == NULL) return;
    else{
        node *dlt = tmp->next;
        tmp->next = dlt->next;
        free(dlt);
    }
}
void print(node *head){
    node *tmp = head;
    while(tmp != NULL){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
