#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll n,k;
const ll m = 1e9 + 7;
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
	if(k % 2) return X*X*x;
	else return X*X;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
   	ll b[11][11];
   	matrix x;
   	for(int i = 0;i < n;i++){
   		for(int j = 0;j < n;j++){
   			cin >> b[i][j];
   			x.a[i][j] = b[i][j];
   		}
   	}
    matrix res = binpow(x,k);
    ll ans = 0;
    for(int i = 0;i < n;i++){
    	ans += res.a[i][n-1];
    	ans %= m;
    }
    cout << ans << endl;
}