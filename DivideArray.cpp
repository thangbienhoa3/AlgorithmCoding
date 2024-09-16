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
    ll a[n];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    sort(a,a+n);
    int t = min(k,n-k);
    int cnt = 1;
    	ll res = 0;
    	for(int i = 0; i < n;i++){
    		if(cnt > t){
    			res += a[i];
    		}
    		else res -= a[i];
    		cnt++;
    	}
    	cout << res << endl;
}