#include <iostream>
#include <queue>

using namespace std;

struct BNODE{
    char label;
    BNODE *left,*right;
};

BNODE *create_new_node(char label){
    BNODE *new_node = new BNODE;
    new_node->label = label;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
void add_new_child(BNODE *root,char label,int isleftchild){
    BNODE *new_node = create_new_node(label);
    if(root == NULL){
        root = new_node; 
        return;
    }
    else if(isleftchild){
        root->left = new_node;
    }
    else root->right = new_node;
}
BNODE *intiTree(){
    BNODE *root;
    root = create_new_node('A');
    // thêm con trái con phải của A;
    add_new_child(root,'B',1);
    add_new_child(root,'F',0);
    //thêm con phải của B
    add_new_child(root->left,'C',0);
        add_new_child(root->left,'C',1);

    // thêm con trái con phải của F
    add_new_child(root->right,'E',1);
    add_new_child(root->right,'G',0);
    // thêm con trái của E là D;
    add_new_child(root->right->left,'D',1);
    // thêm con trái con phải của G
    add_new_child(root->right->right,'H',1);
    add_new_child(root->right->right,'I',0);
    // thêm con trái của H
    add_new_child(root->right->right->left,'J',1);
    return root;
}
void pre_order_tranversal(BNODE *root){
    if(root == NULL) return;
    cout << root->label << " ";
    pre_order_tranversal(root->left);
    pre_order_tranversal(root->right);
}
void in_order_tranversal(BNODE *root){
    if(root == NULL) return;
    in_order_tranversal(root->left);
    cout << root->label << ' ';
    in_order_tranversal(root->right);
}
void post_order_tranversal(BNODE *root){
    if(root == NULL) return;
    post_order_tranversal(root->left);
    post_order_tranversal(root->right);
    cout << root->label << ' ';
}
void print_level_order(BNODE *root){
    if(root == NULL) return;
    queue <BNODE *>  q;
    q.push(root);
    while(!q.empty()){
        BNODE *node = q.front();
        cout << node->label << ' ';
        q.pop();
        if(node->left != NULL){
            q.push(node->left);
        }
        if(node->right != NULL){
            q.push(node->right);
        }
    }

}
int cal_height(BNODE *root){
    if(root == NULL) return -1;
    else{
        int left_height = cal_height(root->left);
        int right_height = cal_height(root->right);
        return 1 + (left_height > right_height ? left_height : right_height);
    }
}
int cal_depth(BNODE *root,BNODE *curr){
    if(root == NULL) return -1;
    if(root == curr) return 0;
    int left = cal_depth(root->left,curr);
    if(left>=0) return 1+left;
    int right = cal_depth(root->right, curr);
    if(right>=0) return 1+right;
    return -1;
}
BNODE *find_node(BNODE *root,char label){
    if(root == NULL || root->label == label) return root;
    BNODE *left = find_node(root->left,label);
    if(left != NULL) return left;
    return find_node(root->right,label);
}
int calculate(BNODE* root)
{
    if(NULL==root) return 0;
   int l = calculate(root->left);
   int r = calculate(root->right);
   return 1+ (l>r?l:r);
}
int processTree(BNODE* r1, BNODE* r2)
{
     if(r1==NULL && r2==NULL) return 1;
     if((r1!=NULL && r2==NULL)||(r1==NULL&&r2!=NULL)) return 0;
     return 1 + processTree(r1->left, r2->left) + processTree(r1->right, r2->right);
}
BNODE* find( BNODE* root,  BNODE* rNode)
{
    if(root==NULL||root->left==rNode || root->right==rNode) return root;
    BNODE *left = find(root->left, rNode);
    if(left!=NULL) return left;
    return find(root->right, rNode);
}
void printNodes(BNODE* root, int level) {
    if (root == NULL) return;
    if (level == 1 && root->left==NULL && root->right==NULL) {
        cout << root->label << ' ';
    } 
    else if (level > 1) {
        printNodes(root->left, level - 1);
        printNodes(root->right, level - 1);
    }
}
int main(){
    BNODE *root = intiTree();
    BNODE *curr = find(root,root);
    cout << calculate(root) <<endl;
    printNodes(root,4);
    cout << processTree(root->left,root->right) << endl;
}