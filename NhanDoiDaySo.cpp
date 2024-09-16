#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int find(ll n,ll k){
	ll t = binpow(2,n-1);
	if(k == t) return n;
	else if(k < t) return find(n-1,k);
	else return find(n - 1,k - t);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k; cin >> n >> k;
    cout << find(n,k) << endl;
}