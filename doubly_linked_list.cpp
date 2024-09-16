#include <iostream>

using namespace std;
struct dnode{
    int data;
    dnode *next,*prev;

};
dnode *create_new_node(int data){
    dnode *new_node = new dnode;
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}
void print(dnode *head){
    dnode *tmp = head;
    while(tmp != NULL){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void push_at_front(dnode **head,int data){
    dnode *new_node = create_new_node(data);
    if(*head == NULL){
        *head = new_node;
        return;
    }
    else{
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
    }
}
void push_at_end(dnode **head,int data){
    dnode *new_node = create_new_node(data);
    if(*head == NULL){
        *head = new_node;
        return;
    }
    else{
        dnode *tmp = *head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = new_node;
        new_node->prev = tmp;
    }
}
void push_at_k(dnode **head,int data,int k){
    dnode *new_node = create_new_node(data);
    if(*head == NULL){
        *head = new_node;
        return;
    }
    else{
        int cnt = 1;
        dnode *tmp = *head;
        while(tmp->next != NULL && cnt < k - 1){
            tmp = tmp->next;
            cnt++;
        }
        if(tmp->next == NULL){
            tmp->next = new_node;
            new_node->prev = tmp;
            return;
        }
        else{
            tmp->next->prev = new_node;
            new_node->prev = tmp;
            new_node->next = tmp->next;
            tmp->next = new_node;
        }
    }
}
int main(){
    dnode *head = NULL;
    push_at_front(&head,1);
    /*push_at_front(&head,2);
    push_at_front(&head,3);
    push_at_front(&head,4);*/
    push_at_end(&head,2);
    push_at_end(&head,3);
    push_at_end(&head,4);
    push_at_end(&head,5);
    print(head);
    // 1 2 3 4 5 6
    push_at_k(&head,69,2);
    push_at_k(&head,69,10);
    // 1 69 2 3 4 5 69
    print(head);

}