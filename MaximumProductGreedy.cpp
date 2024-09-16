#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll m = 1e9 + 7;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll res = 0;
    ll a[n+1];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
    	res += a[i] * i;
    	res %= m;
    }
    cout << res << endl;
}