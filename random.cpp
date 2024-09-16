#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e3 + 1;
int a[N],b[N],c[N];
int mark[N];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0;i < n;i++) {
    	cin >> a[i];
    	mark[a[i]]++;
    }
   	for(int i = 0;i < n;i++) {
   		cin >> b[i];
   		mark[b[i]]++;
   	}
   	for(int i = 0;i < n;i++) {
   		cin >> c[i];
   		mark[c[i]]++;
   	}
   	// in theo thứ tự tăng dần
   	for(int i = 0;i <= N;i++){
   		if(mark[i] == 1){
   			cout << i << ' ';
   		}
   	}
   	cout << endl;
   	// in theo thứ tự của mảng
   	for(int i = 0;i < n;i++) {
    	if(mark[a[i]] == 1) cout << a[i] << ' ';
    }
   	for(int i = 0;i < n;i++) {
   		if(mark[b[i]] == 1) cout << b[i] << ' ';
   	}
   	for(int i = 0;i < n;i++) {
    	if(mark[c[i]] == 1) cout << c[i] << ' ';
   	}
}