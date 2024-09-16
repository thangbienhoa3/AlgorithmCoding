#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll N = 1e6 + 1;
const ll m = 1e9 + 7;
ll a[N];
void fibo(){
	a[0] = 0,a[1] = 1;
	for(int i = 2;i < N;i++){
		a[i] = a[i-1] + a[i-2];
		a[i] %= m;
	}
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    fibo();
    while(t--){
    	int n; cin >> n;
    	cout << a[n] << endl;
    }
}