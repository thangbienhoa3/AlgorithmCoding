#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 100000;
const int m = 1e9 + 7;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while(t--){
    	int f[N] = {0};
	    int n,k = 3; cin >> n;
	    f[0] = 1;
	    for(int i = 1;i <= n;i++){
	    	for(int j = 1;j <= k;j++){
	    		if(i >= j){
	    			f[i] += f[i-j];
	    			f[i] %= m;
	    		}
	    	}
	    }
	    cout << f[n] << endl;
	}
}