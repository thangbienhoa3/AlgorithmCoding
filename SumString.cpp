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
    string s; cin >> s;
    int n = s.length();
    s = "0" + s;
    ll dp[20] = {0};
    ll sum = 0;
    for(int i = 1;i <= n;i++){
    	dp[i] = dp[i-1]*10 + i*(s[i]- '0');
    	sum += dp[i];
    }
    cout << sum << endl;
    
}