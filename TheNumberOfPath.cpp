#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int m = 1e9 + 7;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    char a[1005][1005];
    int dp[1005][1005];
    for(int i = 0;i < n;i++){
    	for(int j = 0;j < n;j++){
    		cin >> a[i][j];
    		if(i == 0 && j == 0 && a[i][j] == '.'){
    			dp[i][j] = 1;
    		}
    	}
    }
    for(int i = 1;i < n;i++){
    	if(a[i][0] == '.') dp[i][0] = 1*dp[i-1][0];
    }
    for(int i = 1;i < n;i++){
    	if(a[0][i] == '.') dp[0][i] = 1*dp[0][i-1];
    }
    for(int i = 1;i < n;i++){
    	for(int j = 1;j < n;j++){
    		if(a[i][j] == '.'){
    			dp[i][j] = (dp[i-1][j] % m) + (dp[i][j-1] % m);
    			dp[i][j] %= m;
    		}
    	}
    }
    cout << dp[n-1][n-1] << endl;
}