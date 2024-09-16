/*Minh họa các thao tác cơ bản trên cây tổng quát*/

#include <iostream>
#include <string.h>
#include<queue> // cho duyệt theo mức
#include<stack> // cho duyệt theo chiều sâu
#include<set>
using namespace std;

typedef struct TreeNode
{
    char info;
    struct TreeNode* firstChild;
    struct TreeNode* nextSibling;
} TNODE;

/*Hàm tạo ra 1 nút mới*/
TNODE* makeNewNode(char data)
{
    TNODE* p = (TNODE*)malloc(sizeof(TNODE));
    if (NULL != p) {
        p->info = data;
        p->nextSibling = p->firstChild = NULL;
    }   
    return p;
}

/*Hàm thêm nút mới vào làm nút con mới nhất của nút root hiện tại
cây ban đầu phải khác NULL
*/

void addNodeIntoTree(TNODE* root, char data)
{
    TNODE* newNode = makeNewNode(data);

    // TH1. root là nút lá, nút mới sẽ là firstChild
    if (root->firstChild == NULL) {
        root->firstChild = newNode;
    }
    else
    { // TH2. root đã có firstChile, cần tìm vị trí con nhỏ nhất hiện tại
        TNODE* preNode = root->firstChild;
        while (preNode->nextSibling != NULL) {
            preNode = preNode->nextSibling;
        }
        // gắn nút mới là con nhỏ nhất (sau con nhỏ nhất đã tìm được)
        preNode->nextSibling = newNode;
    }
}

//Hàm tìm kiếm xem 1 khóa có xuất hiện trên cây hay không
// nếu có thì trả về nút chứa khóa
TNODE* findKey(TNODE* root, char key)
{
    // CODE tại đây
    queue <TNODE*> q;
    TNODE *it = NULL;
    q.push(root);
    while(!q.empty()){
        if(q.front()->info == key){
            return q.front();
        }
        TNODE *tmp = q.front()->firstChild;
        while(tmp != NULL){
            q.push(tmp);
            tmp = tmp->nextSibling;
        }
        q.pop();
    }
    return NULL;
}

// Hàm đọc cây ban đầu vào từ input
TNODE* loadTreeFromInputData()
{
    TNODE* root = NULL, *pParent;
    char nextLine[255], nextNodeLabel, parentLabel;
    while (1)
    {
        fgets(nextLine, sizeof(nextLine), stdin);
        nextLine[strcspn(nextLine, "\r\n")] = 0;

        if (strcmp(nextLine, "$") == 0) break;

        // get the root name
        if (nextLine[0] == '$') {
            nextNodeLabel = nextLine[2];
            root = makeNewNode(nextNodeLabel);
        }
        else
        {
            parentLabel = nextLine[0];
            pParent = findKey(root, parentLabel);

            if (NULL == pParent) {
                continue;
            }

            unsigned int nextIdx = 2;
            while (nextIdx < strlen(nextLine))
            {
                nextNodeLabel = nextLine[nextIdx];
                addNodeIntoTree(pParent, nextNodeLabel);
                nextIdx = nextIdx + 2;
            }
        }
    }
    
    return root;
}
// Hàm thêm 1 nút mới vào cây khác rỗng gốc là root
// nhãn của nút cha sẽ là parentLabel, và nhãn của nút mới thêm là newChildLabel
// nếu nhãn nút cha đã tồn tại thì thêm nút con (chăc chắn KHÔNG trùng nhãn) vào con phải nhất của nút cha
void addANewChildForNode(TNODE* root, char parentLabel, char newChildLabel)
{
    // Code tại đây
    TNODE *it = findKey(root,parentLabel);
    if(it == NULL) return;
    else{
        addNodeIntoTree(it,newChildLabel);    
    }
}

// hàm thêm 1 loạt nút mới vào cây ban đầu khác rỗng
void addNewNodeIntoTree(TNODE* root)
{
    char nextLine[255], nextNodeLabel, parentLabel;
    while (1)
    {
        fgets(nextLine, sizeof(nextLine), stdin);
        nextLine[strcspn(nextLine, "\r\n")] = 0;

        if (strcmp(nextLine, "$") == 0) break;

        parentLabel = nextLine[0];

        unsigned int nextIdx = 2;
        while (nextIdx < strlen(nextLine))
        {
            nextNodeLabel = nextLine[nextIdx];
            addANewChildForNode(root, parentLabel, nextNodeLabel);
            nextIdx = nextIdx + 2;
        }
    }
}

// Hàm giải phóng cây có gốc là root
// Các nút cần được giải phóng lần lượt

void deleteTree(TNODE** root)
{
    if(*root == NULL) return;
    deleteTree(&(*root)->firstChild);
    deleteTree(&(*root)->nextSibling);
    *root = nullptr;
    delete *root;
}

// tim nut cha cua nut p tren cay co goc la root
TNODE* findParent(TNODE* root, char branchRootLabel) {
    if (root == NULL) return NULL;
    TNODE* q = root->firstChild;
    while (q != NULL) {
        if (q->info == branchRootLabel) return root;
        TreeNode* pp = findParent(q, branchRootLabel);
        if (pp != NULL) return pp;
        q = q->nextSibling;
    }
    return NULL;
}


void deleteABranch(TNODE* root, char branchRootLabel)
{
    TNODE *it = findKey(root,branchRootLabel);
    if(it != NULL){
        if(it->firstChild != NULL)deleteTree(&(it->firstChild));
        TNODE *par = findParent(root,branchRootLabel);
        TNODE *tmp = par->firstChild;
        TNODE *prev = par;
        while(tmp->info != branchRootLabel){
            prev = tmp;
            tmp = tmp->nextSibling;
        }
        prev->nextSibling = tmp->nextSibling;
        tmp = NULL;
        delete tmp;
    }
    else return;

}
// hàm xóa các nhánh trên cây đọc vào từ bàn phím
void deleteBranchs(TNODE* root)
{
    char nextLine[255], branchRootLabel;
    while (1)
    {
        fgets(nextLine, sizeof(nextLine), stdin);
        nextLine[strcspn(nextLine, "\r\n")] = 0;

        if (strcmp(nextLine, "$") == 0) break;

        branchRootLabel = nextLine[0];
        deleteABranch(root, branchRootLabel);  
    }
}


// Hàm duyệt cây theo mức == duyệt theo chiều rộng
void levelTraversal(TNODE* root)
{
    if (NULL == root) {
        return;
    }
    queue<TNODE*> myQueue;
    myQueue.push(root);

    TNODE* currNode, * currChild;
    // lặp khi mà queue còn khác rỗng
    while (!myQueue.empty())
    {
        currNode = myQueue.front();
        myQueue.pop();
        printf("%c ", currNode->info);

        // thêm các con của nút hiện tại vào tiếp queue
        currChild = currNode->firstChild;
        while (currChild != NULL) {
            myQueue.push(currChild);
            currChild = currChild->nextSibling;
        }
    }
}

// Hàm duyệt cây theo chiều sâu, duyệt theo thứ tự trước cài đặt đệ quy
void preOrderTraversal(TNODE* root) {
    if (root == NULL) return;
    printf("%c ", root->info);
    // gọi đệ quy đến các cây con
    TNODE* currChild = root->firstChild;

    while (currChild != NULL) {
        preOrderTraversal(currChild);
        currChild = currChild->nextSibling;
    }
}

// Hàm duyệt cây theo chiều sâu, duyệt theo thứ tự sau dùng stack ngoài
void postOrderTraversal(TNODE* root) {
    if (root == NULL) return;
    stack<TNODE*>myStack;
    stack<TNODE*>tempStack;
    set<TNODE*> processedNode;
    myStack.push(root);

    TNODE* currNode, * currChild;

    while (!myStack.empty())
    {
        // xem xét nút hiện tại
        currNode = myStack.top();
        // nếu nút hiện tại là nút lá thì xử lý luôn
        if (currNode->firstChild == NULL) {
            myStack.pop();
            printf("%c ", currNode->info);
        }
        else {
            // check xem đã xử lý chưa
            auto it = processedNode.find(currNode);
            // nếu đã có trong set thì xử lý luôn
            if (it != processedNode.end()) {
                myStack.pop();
                printf("%c ", currNode->info);
            }
            else { // chua có trong set thì thêm con vào, và thêm vào set
                processedNode.insert(currNode);
                // nếu có con thì thêm con vào stack trước
                currChild = currNode->firstChild;
                while (currChild != NULL) {
                    tempStack.push(currChild);
                    //myStack.push(currChild);
                    currChild = currChild->nextSibling;
                }

                // thêm lại lần nữa
                while (!tempStack.empty())
                {
                    myStack.push(tempStack.top());
                    tempStack.pop();
                }
            }

        }

    }
}

// hàm đếm tổng số lượng nút trên cây
int countTotalNodes(TNODE* root)
{
    // Code tại đây
    if(root == NULL) return 1;
    queue <TNODE*> q;
    int cnt = 1;
    q.push(root);
    while(!q.empty()){
        TNODE *tmp = q.front()->firstChild;
        while(tmp != NULL){
            cnt++;
            q.push(tmp);
            tmp = tmp->nextSibling;
        }
        q.pop();
    }  
    return cnt;
}

// hàm đếm tổng số lượng nút lá trên cây
int countTotalLeaves(TNODE* root)
{
    // code tại đây
    queue <TNODE*> q;
    int cnt = 0;
    q.push(root);
    while(!q.empty()){
        TNODE *tmp = q.front()->firstChild;
        if(tmp == NULL) cnt++;
        while(tmp != NULL){
            q.push(tmp);
            tmp = tmp->nextSibling;
        }
        q.pop();
    }    
    return cnt;
}

// hàm tính và trả về độ cao của root
// độ cao của lá là 0
int findHeight(TNODE* root)
{
    if (root == NULL) { // nút rỗng
        return -1;
    }
    if (root->firstChild == NULL) { // nút lá
        return 0;
    }
    int maxChildHeight = -10, currChildHeight;
    TNODE* currChild = root->firstChild;
    while (currChild != NULL)
    {
        currChildHeight = findHeight(currChild);
        if (currChildHeight > maxChildHeight) {
            maxChildHeight = currChildHeight;
        }
        currChild = currChild->nextSibling;
    }
    return 1 + maxChildHeight;
}



// test code
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    TNODE* root = NULL;
    char nextCommand[100];
    while (1)
    {
        fgets(nextCommand, sizeof(nextCommand), stdin);
        nextCommand[strcspn(nextCommand, "\r\n")] = 0;
        if (strlen(nextCommand) == 0) continue;
        if (nextCommand[0] != '?') break;
        if (strcmp(&nextCommand[2], "readTree") == 0) {
            root = loadTreeFromInputData();
        }
        else if (strcmp(&nextCommand[2], "preOrderTraversal") == 0) {
            printf("Duyet theo thu tu truoc: ");
            preOrderTraversal(root);
            printf("\n");
        }
        else if (strcmp(&nextCommand[2], "postOrderTraversal") == 0) {
            printf("Duyet theo thu tu sau: ");
            postOrderTraversal(root);
            printf("\n");
        }
        else if (strcmp(&nextCommand[2], "levelOrderTraversal") == 0) {
            printf("Duyet theo muc: ");
            levelTraversal(root);
            printf("\n");
        }
        else if (strcmp(&nextCommand[2], "getHeight") == 0) {
            printf("Chieu cao cua cay: %d\n", findHeight(root));
        }
        else if (strcmp(&nextCommand[2], "getTotalNodes") == 0) {
            printf("Tong so nut: %d\n", countTotalNodes(root));
        }
        else if (strcmp(&nextCommand[2], "getTotalLeaves") == 0) {
            printf("Tong so nut la: %d\n", countTotalLeaves(root));
        }
        else if (strcmp(&nextCommand[2], "addNewNode") == 0) {
            addNewNodeIntoTree(root);
        }
        else if (strcmp(&nextCommand[2], "deleteNode") == 0) {
            deleteBranchs(root);
        }
    }

    deleteTree(&root);
    return 0;
}