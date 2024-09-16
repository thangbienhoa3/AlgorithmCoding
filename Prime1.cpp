#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6 + 1;
ll a[N];
ll b[N];
void prime(){
	a[0] = 1,a[1] = 1;
	for(int i = 2;i*i <= N;i++){
		if(!a[i]){
			for(int j = i*i;j <= N;j += i){
				a[j] = 1;
			}
		}
	}
	for(int i = 2;i <= N;i++){
		b[i] = b[i-1];
		if(!a[i]){
			b[i]++;
		}
	}
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    prime();
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	cout << b[n] << endl;
    }
}