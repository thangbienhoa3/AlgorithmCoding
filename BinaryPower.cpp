#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll m = 1e9 + 7;

ll binpow(ll a,ll b){
	ll res = 1;
	a %= m;
	while(b > 0){
		if(b & 1){
			res *= a;
			res %= m;
		}
		a *= a; a %= m;
		b >>= 1;
	}
	return res;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b;
    cin >> a >> b;
    cout << binpow(a,b);
}