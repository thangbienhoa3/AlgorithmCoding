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
    ll n; cin >> n;
    ll a[n+1];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
    	cout << a[i] << ' ';
    }
}