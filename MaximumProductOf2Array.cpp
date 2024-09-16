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
    int n;cin >> n;
    ll a[n],b[n];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
    	cin >> b[i];
    }
    sort(b,b+n);
    ll res = 0;
    for(int i = 0;i < n;i++){
    	res += a[i] * b[i];
    }
    cout << res << endl;
}