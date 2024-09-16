#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll m = 1e9 + 7;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   	ll n,c; cin >> n >> c;
   	ll a[n+1],dp[n+1][c+1];
   	for(int i = 0;i <= n;i++){
   		for(int j = 0;j <= c;j++){
   			dp[i][j] = 0;
   		}
   	}
   	for(int i = 0;i < n;i++){
   		cin >> a[i];
   	}
   	dp[0][0] = 1;
   	for(int i = 1;i <= n;i++){
   		for(int j = 0;j <= c;j++){
   			dp[i][j] += dp[i-1][j] % m;
   			if(j >= a[i-1]) dp[i][j] += dp[i][j-a[i-1]] % m;
   		}
   	}
   	cout << dp[n][c] << endl;
}