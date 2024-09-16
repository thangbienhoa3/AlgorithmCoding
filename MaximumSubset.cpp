#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1005],dp[1005];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    	dp[i] = a[i];
    }
    dp[0] = a[0];
    for(int i = 1;i < n;i++){
    	for(int j = 0;j < i;j++){
    		if(a[i] > a[j] && dp[j] + a[i] > dp[i]){
    			dp[i] = dp[j] + a[i];
    		}
    	}
    }
    int res = -1;
    for(int i = 0;i < n;i++){
    	 res = max(res,dp[i]);
    }
    cout << res << endl;
}