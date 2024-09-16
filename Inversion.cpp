#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9+7;
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
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
    ll n; cin >> n;
    ll m = 0,tmp = n;
    while(tmp > 0){
    	m = m * 10 + tmp % 10;
    	tmp /= 10;
    }
    n %= mod;
    cout << binpow(n,m) << endl;;
}