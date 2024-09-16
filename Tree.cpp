#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct Tnode{
	char label;
	Tnode *firstChild;
	Tnode *nextSilbing;
};
int height(Tnode *root){
	if(root == NULL) return 0;
	int maxh = 0;
	Tnode *q = root->firstChild;
	while(q != NULL){
		int h = height(q);
		if(h > maxh) maxh = h;
		q = q->nextSilbing;
	}
	return maxh + 1;
}
void preOrder(Tnode *root){	
	if(root == NULL) return;
	cout << root->label << ' ';
	Tnode *tmp = root->firstChild;
	while(tmp != NULL){
		preOrder(tmp);
		tmp = tmp->nextSilbing;
	}
}
void postOrder(Tnode *root){
	if(root == NULL) return;
	Tnode *tmp = root->firstChild;
	while(tmp != NULL){
		postOrder(tmp);
		tmp = tmp->nextSilbing;
	}
	cout << tmp->label << ' ';
}
void levelOrder(Tnode *root){
	if(root == NULL) return;
	queue <Tnode *> q;
	q.push(root);
	while(!q.empty()){
		Tnode *tmp = q.front();
		q.pop();
		cout << tmp->label << ' ';
		Tnode *p = t->firstChild;
		while(p != NULL){
			q.push(p);
			p->nextSilbing;
		}
	}
}
int countTotalNodes(Tnode *root){
	if(root == NULL) return 1;
	queue <Tnode*> q;
	int cnt = 1;
	q.push(root);
	while(!q.empty()){
		Tnode *tmp = q.front()->firstChild;
		q.pop();
		while(tmp != NULL){
			cnt++;
			q.push(tmp);
			tmp = tmp->nextSilbing;
		}
	}
	return tmp;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}