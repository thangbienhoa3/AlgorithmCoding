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
   	int c,n; cin >> c >> n;
   	int w[n+1];
   	for(int i = 0;i < n;i++){
   		cin >> w[i];
   	}
   	int dp[105][25001];
   	for(int i = 0;i <= n;i++){
   		for(int j = 0;j <= c;j++){
   			if(i == 0 || j == 0){
   				dp[i][j] = 0;
   			}
   			else if(w[i-1] <= j){
   				dp[i][j] = max(dp[i-1][j],dp[i-1][j - w[i-1]] + w[i-1]);
   			}
   			else dp[i][j] = dp[i-1][j];
   		}
   	}
   	cout << dp[n][c];
}