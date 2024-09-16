#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll m = 1e9 + 7;
ll n;
struct matrix{
	ll a[11][11];

	friend matrix operator * (matrix x,matrix y){
		matrix res;
		for(int i = 0; i < n;i++){
			for(int j = 0;j < n;j++){
				res.a[i][j] = 0;
				for(int k = 0;k < n;k++){
					res.a[i][j] += x.a[i][k] * y.a[k][j];
					res.a[i][j] %= m;
				}
			}
		}
		return res;
	}
};
matrix binpow(matrix x,ll k){
	if(k == 1) return x;
	matrix X = binpow(x,k/2);
	if(k % 2 == 0) return X*X;
	else return X*X*x;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    matrix x;
    ll k; cin >> n >> k;
    for(int i = 0;i < n;i++){
    	for(int j = 0;j < n;j++){
    		int t; cin >> t;
    		x.a[i][j] = t;
    	}
    }
    matrix res = binpow(x,k);
   	for(int i = 0;i < n;i++){
    	for(int j = 0;j < n;j++){
    		cout << res.a[i][j] << ' ';
    	}
    	cout << endl;
    }
}