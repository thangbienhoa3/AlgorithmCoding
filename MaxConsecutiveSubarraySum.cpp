#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll maxCurr,res;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll a[n+1];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    for(int i = 0;i < n;i++){
    	maxCurr += a[i];
    	if(maxCurr > res){
    		res = maxCurr;
    	}
    	if(maxCurr < 0){
    		maxCurr = 0;
    	}
    }
    cout << res << endl;
}