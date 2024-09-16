#include <iostream>
#include <vector>
#include <stack>
using namespace std;
const int N = 1e3 + 4;
int n,m,s,t,cnt;
int a[N],parent[N];
vector <int> adj[N];
int visited[N];
void DFS(int u){
    visited[u] = cnt;
    for(const &v : adj[u]){
        if (!visited[v]){
			DFS(v);
		}
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0;i < m;i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int u = 1;u <= n;u++){
        if(visited[u] = 0){
            DFS(u);
            cnt++;
        }
    }
    cout << "Number of connected components: " << cnt << endl;
    for(int i = 0;i < n;i++){
        cout << i << visited[i] << endl;
    }

}