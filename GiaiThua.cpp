#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll N = 1e6 + 5;
const ll m = 1e9 + 7;
ll a[N];
void gt(){
	a[0] = 1,a[1] = 1;
	for(int i = 2;i < N;i++){
		a[i] = (i*a[i-1]) % m;
	}
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;cin >> t;
    gt();
    while(t--){
    	int n; cin >> n;
    	cout << a[n] << endl;
    }
}
