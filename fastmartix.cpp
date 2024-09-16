#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll m = 1e9 + 7;
struct matrix{
	ll a[2][2];

	friend matrix operator * (matrix x,matrix y){
		matrix res;
		for(int i = 0; i < 2;i++){
			for(int j = 0;j < 2;j++){
				res.a[i][j] = 0;
				for(int k = 0;k < 2;k++){
					res.a[i][j] += x.a[i][k] * y.a[k][j];
					res.a[i][j] %= m;
				}
			}
		}
		return res;
	}
};
matrix binpow(matrix x,ll n){
	if(n == 1) return x;
	matrix X = binpow(x,n/2);
	if(n % 2 == 0) return X*X;
	else return X*X*x;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    matrix x;
    x.a[0][0] = 1;
    x.a[0][1] = 1;
    x.a[1][0] = 1;
    x.a[1][1] = 0;
    matrix res = binpow(x,n);
    cout << res.a[0][1] << endl;

}