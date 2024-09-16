#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll N = 1e6 + 5;
const ll m = 1e9 + 7;

ll a[N];
ll dp[N];
void Prime(){
	a[0] = 1,a[1] = 1;
	dp[0] = 0,dp[1] = 1;
	for(int i = 2;i*i <= N;i++){
		if(!a[i]){
			for(int j = i*i;j <= N;j+=i){
				a[j] = 1;
			}
		}
	}
	for(int i = 2;i <= N;i++){
		if(!a[i]){
			dp[i] = (dp[i-1] % m)*(i % m);
			dp[i] %= m;
		}
		else dp[i] = dp[i-1];
	}
	
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Prime();
    ll t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	cout << dp[n] << endl;
    }
}