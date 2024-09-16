#include <iostream>


using namespace std;
const int N = 1e3 +4;
vector <int> adj[N];
int v,e;
// v: vertice đỉnh
// e: edge cạnh
void input(){
    cin >> v >> e;
    for(int i = 0;i < e;i++){
        int u,t; cin >> u >> t;
        adj[t].push_back(u);
        adj[u].push_back(t);
    }
}
int isEulerCircuit(){
    for(int i = 0;i < v;i++){
        if(adj[i].size() % 2){
            return 0;
        }
    }   
    return 1;
}
int isEulerPath(){
    int cnt = 0;
    for(int i = 0;i < v;i++){
        if(adj[i].size() % 2){
            cnt++;
        }
    }   
    if(cnt <= 2){
        return 1;
    }
    return 0;
}
int main(){
    input();
    if(isEulerCircuit()){
        cout << "GRAPH HAS A EULER CIRCUIT" << endl;
    }
    else if(isEulerPath()){
        cout << "GRAPH HAS A EULER PATH" << endl;
    }
    else cout << "NOT EULERIAN" << endl;
}