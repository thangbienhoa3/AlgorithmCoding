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
   	int n,k; cin >> n >> k;
   	int w[n+1];
   	int v[n+1];
   	for(int i = 0;i < n;i++) cin >> w[i];
   	for(int i = 0;i < n;i++) cin >> v[i];
   	int b[n+1][k+1];
   	for(int i = 0;i <= n;i++){
   		for(int j = 0;j <= k;j++){
   			if(i == 0 || j == 0){
   				b[i][j] = 0;
   			}
   			else if(w[i-1] <= j){
   				b[i][j] = max(b[i-1][j],v[i-1] + b[i-1][j - w[i-1]]);
   			}
   			else b[i][j] = b[i-1][j];
   		}
   	}
   	cout << b[n][k] << endl;
}