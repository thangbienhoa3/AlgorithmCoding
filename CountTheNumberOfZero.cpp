#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll F[100];
ll find(ll n,ll k){
	if(n == 1) return 0;
	if(n == 2) return 1;
	if(k <= F[n-2]) return find(n-2,k);
	else return find(n-1,k - F[n-2]);
}
int main(){
  	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    F[1] = 1, F[2] = 1;
    for(int i = 3;i <= 92;i++){
    	F[i] = F[i-1] + F[i-2];
    }
    ll n,k;
    cin >> n >> k;
    cout << find(n,k) << endl;
}
