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
    ll n,k; cin >> n >> k;
    ll a[n];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }	
    ll *it = upper_bound(a,a+n,k);
    if(it - a != 0){
	    it--;
	    cout << *it << endl;
	}
	else cout << "-1" << endl;
}