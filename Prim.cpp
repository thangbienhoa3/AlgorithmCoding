#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll N = 1e3 + 5;
const ll INF = 1e5 + 7;
int n,m;
int d[N],near[N];
int inTree[N];
struct  edge{
    int u,v,w;
    edge(int _u,int _v,int _w) : u(_u),v(_v),w(_w){}
};
vector <edge> adj[N];
vector <edge> res;
void input(){
    cin >> n >> m;
    int u,v,w;
    for(int i = 1;i <= m;i++){
        cin >> u >> v >> w;
        adj[u].push_back(edge(u,v,w));    
        adj[v].push_back(edge(v,u,w));         
    }
}
void prim(){
    memset(inTree,0,sizeof(inTree));
    memset(near,1,sizeof(near));
    for(int i = 1;i <= n;i++){
        d[i] = INF;
    }
    for(const edge &e : adj[1]){
        int v = e.v, w = e.w;
        d[v] = w;
    }
    inTree[1] = 1;
    d[1] = 0;
    for(int k = 1;k < n;k++){
        int minDist = INF, nearestVertex = -1;
        for(int i = 1;i <= n;i++){
            if(!inTree[i] && d[i] < minDist){
                minDist = d[i];
                nearestVertex = i;
            }
        }
        inTree[nearestVertex] = 1;
        res.push_back(edge(nearestVertex,near[nearestVertex],minDist));
        // update status of other vertices;
        for(const edge &e : adj[nearestVertex]){
            int v = e.v,w = e.w;
            if(w < d[v]){
                d[v] = w;
                near[v] = nearestVertex;
            }
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    input();
    prim();
    for(auto it : res){
        cout << it.u << ' ' << it.v << ' ' << it.w << endl;
    }
}