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
    int a[n+1];
   	for(int i = 1;i <= n;i++){
   		cin >> a[i];
   	}
   	int b[n+2];
   	int res = 0;
   	for(int i = 1;i <= n;i++){
   		b[i] = 1;
   		for(int j = 1;j <= i;j++){
   			if(a[i] > a[j]){
   				b[i] = max(b[i],b[j] + 1);
   			}
   		}
   	}
   	for(int i = 1;i <= n;i++){
   		res = max(res,b[i]);
   	}
   	cout << res << endl;
}