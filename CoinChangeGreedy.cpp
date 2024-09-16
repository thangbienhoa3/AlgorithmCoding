#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   	ll m; cin >> m;
   	int cnt = 0;
   	for(int i = 9;i >= 0;i--){
   		while(m >= money[i]){
   			m -= money[i];
   			cnt++;
   		}
   	}
   	cout << cnt << endl;
}