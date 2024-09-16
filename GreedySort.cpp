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
    int n; cin >> n;
    ll a[n+1];
    ll b[n+1];
    for(int i = 1;i <= n;i++){
    	cin >> a[i];
    	b[i] = a[i];
    }
    sort(b+1,b+n+1);
    if(a[n/2+1] != b[n/2+1]){
    	cout << "NO" << endl;
    }
    else{
	    for(int i = 1;i <= n / 2;i++){
	    	if(a[i] != b[i] && a[i] != b[n-i+1]){
	    		cout << "NO" << endl;
	    		return 0;
	    	}
	    }
	    cout << "YES" << endl;
	}

}