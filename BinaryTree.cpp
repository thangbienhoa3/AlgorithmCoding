#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct TNode
{
    char label;
    struct TNode *left, *right;
} TN;

// tao nut moi
TN* makeNewNode(char label)
{
    TN *newNode = (TN*)malloc(sizeof(TN));
    newNode->left=newNode->right=NULL;
    newNode->label = label;
    return newNode;
}
// then nut moi vao cay
// root la nut cha va nNode la nut moi them
// tham so rtype = L --> them vao con trai va R thi them vao con phai
void addNodeToTree(TN* root, TN* nNode, char rtype)
{
    if(rtype=='L')
        root->left = nNode;
    else
        root->right = nNode;
}

// duyet cay theo thu tu giua
void inOrderTravel(const TN* root)
{
    if(NULL==root) return;
    inOrderTravel(root->left);
    printf("%c ",root->label);
    inOrderTravel(root->right);
}

void printInOrderTravel(const TN* root)
{
	inOrderTravel(root);
	printf("\n");
}
 
TN * buildTree()
{
	TN *root, *nNode, *parent;
	int level,i;
	char path[20],label, nextLine[50];
	while (1) {
        fgets(nextLine,sizeof(nextLine),stdin);
		if(strstr(nextLine,"-1")!= NULL) break;
        sscanf(nextLine, "%d %s %c", &level,path,&label);
        if(level==0)  {
        	root = makeNewNode(label);
        	continue;
		}
        
        // add decendent nodes
        nNode = makeNewNode(label);
        parent = root;
        for(i=0; i<strlen(path)-1;i++)
        	if(path[i]=='R')parent=parent->right;
        	else parent=parent->left;
        addNodeToTree(parent,nNode,path[i]);
	}
	return root;
}

// Hàm kiểm tra xem cây có phải cây nhị phân tìm kiếm hay không
// nhãn các nút có theo thứ tự A-Z
// Hàm trả về 1 nếu là BST và 0 nếu ngược lại
void inorderTraversal_2(TN *root,vector <char> &v){
    if(root == NULL) return;
    inorderTraversal_2(root->left,v);
    v.push_back(root->label);
    inorderTraversal_2(root->right,v);
}
int isBinarySearchTree(TN* root)
{
    vector <char> v;
    inorderTraversal_2(root,v);
    for(int i = 1;i < v.size();i++){
        if(v[i] < v[i-1]){
            return 0;
        }
    }
    return 1;
}
void checkIsaBST(TN* root)
{
	if(isBinarySearchTree(root)) printf("is a BST\n");
	else printf("is not a BST\n");
}

// hàm đếm độ sâu của cây
// chú ý. cây có 1 nút gốc là lá thì độ sâu là 0
int countLevel(TN* root)
{
	// CODE THÊM TẠI ĐÂY
    if (root == NULL)
        return 0;
 
    int lheight = countLevel(root->left);
    int rheight = countLevel(root->right);
    return max(lheight, rheight) + 1;
}

// Hàm đếm và trả về số lượng nút đầy đủ trên cây
// nút đầy đủ là các nút có đủ 2 con
int countFullNodes(TN* root)
{
    int cnt = 0;
    queue <TN*> q;
    q.push(root);
    while(!q.empty()){
        TN *tmp = q.front();
        q.pop();
        if(tmp->left != NULL && tmp->right != NULL){
            cnt++;
        }
        if(tmp->left != NULL){
            q.push(tmp->left);
        }
        if(tmp->right != NULL){
            q.push(tmp->right);
        }
    }
    return cnt;
}

int main()
{
    TN *root = NULL;
    char nextCommand[50];
	while(1)
	{
		fgets(nextCommand, sizeof(nextCommand), stdin);
        nextCommand[strcspn(nextCommand, "\r\n")] = 0;
	    if(nextCommand[0]!='?') break;
	    if(strcmp(&nextCommand[2],"buildTree")==0)
    		root = buildTree();
    	else if(strcmp(&nextCommand[2],"printInOrderTravel")==0)
    		printInOrderTravel(root);
    	else if(strcmp(&nextCommand[2],"checkIsaBST")==0)
    		checkIsaBST(root);
    	else if(strcmp(&nextCommand[2],"countLevel")==0)
    		printf("Total levels: %d\n",countLevel(root) - 1);
    	else if(strcmp(&nextCommand[2],"countFullNodes")==0)
    		printf("Total full nodes: %d\n",countFullNodes(root));
	}
    
    return 0;
}