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
    int a,b;cin >> a >> b;
    if(a < b) swap(a,b);
    int cnt = a - b;
    if(cnt > b){
    	cout << b << endl;
    }
    else{
    	int ans = cnt;
    	int rest = b - cnt;
    	ans += (rest / 3) * 2 ;
    	if(rest % 3 == 2) ans++;
    	cout << ans << endl;
    }
}