#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> adj[1005];
    int n,m;
   	cin >> n >> m;
   	for(int i = 0;i < m;i++){
   		int x,y; cin >> x >> y;
   		adj[x].push_back(y);
   	}
    for(int i = 1;i <= n;i++){
    	cout << i << " : ";
    	sort(adj[i].begin(),adj[i].end());
    	for(int j = 0;j < adj[i].size();j++){
    		cout << adj[i][j] << ' ';
    	}
    	cout << endl;
    }
    
}