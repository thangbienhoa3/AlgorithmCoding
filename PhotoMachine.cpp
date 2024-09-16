#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int check(ll n,ll x,ll y,ll time){
	time -= min(x,y);
	return time / x + time / y >= n - 1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x,y; cin >> n >> x >> y;
    ll l = 0, r = n * min(x,y);
    ll ans;
    while(l <= r){
    	ll m = (l + r) / 2;
    	if(check(n,x,y,m)){
    		ans = m;
    		r = m - 1;
    	}
    	else l = m + 1;
    }
    cout << ans << endl;
}