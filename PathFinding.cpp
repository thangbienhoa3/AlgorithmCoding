#include <iostream>
#include <vector>
#include <stack>
using namespace std;
const int N = 1e3 + 4;
int n,m,s,t;
int a[N],parent[N];
vector <int> adj[N];
bool visited[N];
void DFS(int u){
    visited[u] = true;
    for(const &v : adj[u]){
        if (!visited[v]){
			parent[v] = u;
			DFS(v);
		}
    }
}
int main(){
    cin >> n >> m >> s >> t;
    for(int i = 0;i < m;i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
    DFS(s);
    if(parent[t] == 0){
        cout << "There is no path from " << s << "to " << t << endl;
    }
    else{
        stack <int> stk;
        int u = t;
        while(u != 0){
            stk.push(u);
            u = parent[u];
        }
        while(!stk.empty()){
            cout << stk.top() << ' ';
            stk.pop();
        }
    }

}