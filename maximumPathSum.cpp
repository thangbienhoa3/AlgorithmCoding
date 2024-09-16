#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[500][500],dp[500][500];

int maxThree(int a,int b,int c){
	return max(max(a,b),c);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;
    for(int i = 0;i < n;i++){
    	for(int j = 0;j < m;j++){
    		cin >> a[i][j];
    	}
    }
    dp[0][0] = a[0][0];
    for(int i = 1;i < n;i++){
    	dp[i][0] = dp[i-1][0] + a[i][0];
    }
    for(int i = 1;i < m;i++){
    	dp[0][i] = dp[0][i-1] + a[0][i];
    }
    for(int i = 1;i < n;i++){
    	for(int j = 1;j < m;j++){
    		dp[i][j] = a[i][j] + maxThree(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]);
    	}
    }
    cout << dp[n-1][m-1];
}