#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[1000][1000];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    string s1 = s;
    reverse(s1.begin(),s1.end());
    for(int i = 1;i <= s.length();i++){
    	for(int j = 1;j <= s1.length();j++){
    		if(s[i-1] == s1[j-1]){
    			dp[i][j] = 1 + dp[i-1][j-1];
    		}
    		else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    	}
    }
    cout << dp[s.length()][s.length()] << endl;
}