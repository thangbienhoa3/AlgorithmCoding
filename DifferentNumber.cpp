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
    ll a[n],b[n];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    int res = -1;
    for(int j =0;j < n-1;j++){
    	cin >> b[j];
    }
    for(int i = 0;i < n - 1;i++){
    	if(a[i] != b[i]){
    		res = i + 1;
    		break;
    	}
    }
    cout << res << endl;
}