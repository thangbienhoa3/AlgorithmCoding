#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int visited[100],visited1[100];
void Dfs(vector <int> adj[],int i){
	visited[i] = 1;
	cout << i << " ";
	for(const int &v : adj[i]){
		if(!visited[v]) Dfs(adj,v);
	}
}
void Bfs(vector <int> adj[],int start){
 	queue <int> qe;
 	qe.push(start);
 	visited1[start] = 1;
 	while(!qe.empty()){
 		int v = qe.front();
 		cout << v << " ";
 		qe.pop();
 		for(const int &x : adj[v]){
 			if(!visited1[x]){
 				qe.push(x);
 				visited1[x] = 1;
 			}
 		}
 	}
}
void addEdge(vector <int> adj[],int i,int j){
	adj[i].push_back(j);
	adj[j].push_back(i);
}	

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> adj[100];
    int n,m; cin >> n >> m;
    for(int i = 0;i < m;i++){
    	int a,b; cin >> a >> b;
    	addEdge(adj,a,b);
    }
    for(int i = 0;i < n;i++){
    	sort(adj[i].begin(),adj[i].end(),greater <int>());
    }
    cout << "DFS: ";
   	for(int i = 0;i < n;i++){
   		if(!visited[i]){
   			Dfs(adj,i);
   		}
   	}
   	cout << endl;
   	cout << "BFS: ";
    Bfs(adj,0);
}