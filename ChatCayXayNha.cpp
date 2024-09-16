#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6 + 5;
int n,a[N];
ll L;
int check(ll h){
	ll ans = 0;
	for(int i = 0;i < n;i++){
		ans += max(0ll,a[i] - h);
	}
	return ans >= L;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> L;
    ll res;
    int l = 0, r = INT_MIN;
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    	r = max(a[i],r);
    }
    while(l <= r){
    	int m = (l + r) / 2;
    	if(check(m)){
    		res = m;
    		l = m + 1;
    	}
    	else r = m - 1;
    }
    cout << res << endl;
}