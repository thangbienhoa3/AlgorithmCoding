#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int check(ll a[],ll n,ll t,ll time){
	ll ans = 0;
	for(int i = 0;i < n;i++){
		ans += time / a[i];
	}
	return ans >= t;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,t,ans; cin >> n >> t;
    ll a[n+1];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    sort(a,a+n);
    ll l = 0, r = 1ll * a[0] * t;
    while(l <= r){
    	ll m = (l + r) / 2;
    	if(check(a,n,t,m)){
    		r = m - 1;
    		ans = m;
    	}
    	else  l = m + 1;
    }
    cout << ans << endl;
}