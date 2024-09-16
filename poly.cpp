#include <iostream>

using namespace std;


struct poly
{
    double heso;
    double somu;
    poly *next;
};
poly *create_new_node(double he_so,double so_mu){

    poly *new_node;
    new_node = new poly;
    new_node->heso = he_so;
    new_node->somu = so_mu;
    new_node->next = NULL;
    return new_node;

}
void printlist(poly *head){
    poly *tmp_node;
    tmp_node = new poly;
    tmp_node = head;
    while(tmp_node != NULL){
        cout << tmp_node->heso << "x^" <<  tmp_node->somu;
        if(tmp_node->next != NULL){
            cout << " + ";
        }
        tmp_node = tmp_node->next;
    }
    cout << endl;
}

int check_node(poly *head,double he_so,double so_mu){
    poly *tmp = head;
    while(tmp != NULL){
        if(tmp->somu == so_mu){
            tmp->heso += he_so;
            return 1;
        }
        else if(tmp->next != NULL && tmp->next->somu > so_mu){
            poly *new_node = create_new_node(he_so,so_mu);
            new_node->next = tmp->next;
            tmp->next = new_node;
            return 1;
        }
        else if(tmp->next == NULL && tmp->somu < so_mu){
            poly *new_node = create_new_node(he_so,so_mu);
            tmp->next = new_node;
            return 1;
        }
        tmp = tmp->next;
    }
    return 0;
}



void push_at_front(poly **head,double he_so,double so_mu){
    if(*head != NULL && check_node(*head,he_so,so_mu)){
        return;
    }
    poly *new_node = create_new_node(he_so,so_mu);
    new_node->next = *head;
    *head = new_node;
}
void push_at_end(poly **head, double he_so,double so_mu)
{
    poly *new_node = create_new_node(he_so,so_mu);
    if(*head == NULL){
        *head = new_node;
    }
    else{
        if(check_node(*head,he_so,so_mu)) return;
        poly *tmp = *head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
            tmp->next = new_node;
    }
    
}
void add_poly(poly *head1, poly *head2){
    poly *tmp1 = head1, *tmp2 = head2;
    poly *add = NULL;
    while(tmp1 && tmp2){
        if(tmp1->somu > tmp2->somu){
            push_at_end(&add,tmp2->heso,tmp2->somu);
            tmp2 = tmp2->next;
        }
        else if(tmp1->somu < tmp2->somu){
            push_at_end(&add,tmp1->heso,tmp1->somu);
            tmp1 = tmp1->next;
        }
        else if(tmp1->somu == tmp2->somu){
            push_at_end(&add,tmp1->heso + tmp2->heso,tmp1->somu);
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    while(tmp1){
        push_at_end(&add,tmp1->heso,tmp1->somu);
        tmp1 = tmp1->next;
    }
    while(tmp2){
        push_at_end(&add,tmp2->heso,tmp2->somu);
        tmp2 = tmp2->next;
    }
    printlist(add);
}

int main(){
    poly *head1 = NULL,*head2 = NULL;
    push_at_front(&head1,10,2);   
    push_at_end(&head1,20,4);
    push_at_end(&head1,20,3);
    push_at_front(&head1,15,4);
    push_at_front(&head1,45,10);
    push_at_front(&head1,10,2);   
    push_at_end(&head1,20,4);
    push_at_end(&head1,20,3);
    push_at_front(&head1,15,4);
    push_at_front(&head1,45,10);
    push_at_front(&head1,10,2);   
    push_at_end(&head1,20,4);
    push_at_end(&head1,20,3);
    push_at_front(&head1,15,4);
    push_at_front(&head1,45,10);

    
    push_at_front(&head2,15,1);
    push_at_end(&head2,20,2);
    push_at_end(&head2,35,4);
    push_at_end(&head2,25,4);
    push_at_end(&head2,13,8);
 push_at_front(&head2,15,1);
    push_at_end(&head2,20,2);
    push_at_end(&head2,35,4);
    push_at_end(&head2,25,4);
    push_at_end(&head2,13,8);
     push_at_front(&head2,15,1);
    push_at_end(&head2,20,2);
    push_at_end(&head2,35,4);
    push_at_end(&head2,25,4);
    push_at_end(&head2,13,8); push_at_front(&head2,15,1);
    push_at_end(&head2,20,2);
    push_at_end(&head2,35,4);
    push_at_end(&head2,25,4);
    push_at_end(&head2,13,8); push_at_front(&head2,15,1);
    push_at_end(&head2,20,2);
    push_at_end(&head2,35,4);
    push_at_end(&head2,25,4);
    push_at_end(&head2,13,8);
    printlist(head1);
    printlist(head2);
    add_poly(head1,head2);



   // phải sort theo số mũ giảm dần trước
    
    //head1: 10x^2 + 20x^4 + 20x^5;
    //head2: 10x^2 + 20x^3 + 30x^4 + 60x^6;

}