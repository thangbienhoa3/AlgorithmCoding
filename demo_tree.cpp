#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

struct tnode{
    char label;
    tnode *firstchild,*next_sibling;
};

tnode *create_new_node(char label){
    struct tnode *new_node = new tnode;
    new_node->label = label;
    new_node->firstchild = NULL;
    new_node->next_sibling = NULL;
    return new_node;
}

void add_new_child(tnode *root,char label){
    struct tnode *new_node = create_new_node(label);
    if(root->firstchild == NULL){
        root->firstchild = new_node;
        return;
    }
    else{
        tnode *prev_brother = root->firstchild;
        while(prev_brother->next_sibling != NULL){
            prev_brother = prev_brother->next_sibling;
        }
        prev_brother->next_sibling = new_node;
    }
}
tnode *initTree(){
    tnode *root = create_new_node('A');
    //B,C,D là con của A
    add_new_child(root,'B');
    add_new_child(root,'C');
    add_new_child(root,'D');
    // E,F là con của C;
    add_new_child(root->firstchild->next_sibling,'E');
    add_new_child(root->firstchild->next_sibling,'F');
    //G,H là con của D;
    add_new_child(root->firstchild->next_sibling->next_sibling,'G');
    add_new_child(root->firstchild->next_sibling->next_sibling,'H');
    //J,K là con của H;
    add_new_child(root->firstchild->next_sibling->next_sibling->firstchild->next_sibling,'J');
    add_new_child(root->firstchild->next_sibling->next_sibling->firstchild->next_sibling,'K');
    return root;
}
int cal_height_of_tree_naive(tnode *root){
    if(root == NULL) return 0;
    int max_height = 0;
    tnode *tmp = root->firstchild;
    while(tmp != NULL){
        int h = cal_height_of_tree_naive(tmp);
        if(h > max_height) max_height = h;
        tmp = tmp->next_sibling;
    }
    return max_height + 1;
}
int cal_height_of_tree_queue(tnode *root){
    int height = 0;
    queue <tnode *> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        while(n>0){
            tnode *tmp = q.front();
            q.pop();
            tmp = tmp->firstchild;
            while(tmp != NULL){
                q.push(tmp);
                tmp = tmp->next_sibling;
            }
            n--;
        }
        height++;
    }
    return height;
}
void level_order_tranversal(tnode *root){
    if(root == NULL){
        return;
    }
    queue <tnode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        while(n>0){
            tnode *tmp = q.front();
            q.pop();
            cout << tmp->label << ' ';
            tmp = tmp->firstchild;
            while(tmp != NULL){
                q.push(tmp);
                tmp = tmp->next_sibling;
            }
            n--;
        }
    }
}
void pre_order_traversal(tnode *root){
    if(root == NULL){
        return;
    }
    else{
        cout << root->label << ' ';
        tnode *next_child = root->firstchild;
        while(next_child != NULL){
            pre_order_traversal(next_child);
            next_child = next_child->next_sibling;
        }
    }
}
void postOrderTravesal(tnode *root){
    if (root == NULL) return; 
    tnode *p = root->firstchild; 
    while (p != NULL) {
        postOrderTravesal(p); 
        p = p->next_sibling;
    }
    cout << root->label << ' ';
}

void func1(tnode *root, int k)
{
    if(root==NULL) return;
    if(k==0) {
        cout << root->label << ' ';
        return ;
    }
    tnode *nextBrother = root->firstchild;
    while(nextBrother!=NULL)
    {
        func1(nextBrother,k-1);
        nextBrother=nextBrother->next_sibling;
    }
}
int func2_caculate_heigth( tnode *root)
{
    if(root==NULL) return 0;
    if(root->firstchild==NULL) return 0;
    tnode *nextBrother = root->firstchild;
    int sum = 0;
    while(nextBrother!=NULL)
    {
        sum += func2_caculate_heigth(nextBrother);
        nextBrother=nextBrother->next_sibling;
    }
    return 1+sum;
}
int func( tnode *root,  tnode *cur)
{
    if(root==NULL) return 0;
    if(root==cur) return 0;
     tnode *nextBrother = root->firstchild;
    int childRet;
    while(nextBrother!=NULL)
    {
        if(cur==nextBrother) return 1;
        childRet = func(nextBrother,cur);
        if(childRet>0) return  1+ childRet;
        nextBrother=nextBrother->next_sibling;
    }
}
int main(){
    tnode *root = initTree();
    cout << func2_caculate_heigth(root) << endl;
    cout << func(root,root->firstchild) << endl;
}