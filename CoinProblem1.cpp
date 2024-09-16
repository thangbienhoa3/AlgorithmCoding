#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6 + 5;
int a[105],dp[N],res = N;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c;
    cin >> n >> c;
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    for(int i = 1;i <= c;i++){
    	dp[i] = N;
    }
    dp[0] = 0;
    for(int i = 1;i <= c;i++){
        for(int j = 0;j < n;j++){
            if(a[j] <= i){
                dp[i] = min(dp[i],1 + dp[i - a[j]]);
            }
        }
    }
    if(dp[c] == N){
        cout << "-1";
    }
    else cout << dp[c];
}