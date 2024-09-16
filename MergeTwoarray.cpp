#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int const N = 1e4+2;
int a[N],b[N];
int find(int l1,int l2,int r1,int r2,int k){
	if(l1 == r1) return b[k];
	if(l2 == r2) return a[k];
	int m1 = (r1 - l1)/2;
	int m2 = (r2 - l2)/2;
	cout << m1 << ' ' << m2 << endl;
	if(m1 + m2 < k){
		if(a[m1] > b[m2]) return find(l1,l2+m2+1,r1,r2,k-m2-1);
		else return find(l1+m1+1,l2,r1,r2,k-m1-1);
	}
	else {
		if(a[m1] > b[m2]) return find(l1,l2,l1 + m1,r2,k);
		else return find(l1,l2,r1,l2 + m2,k);
	}
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k; cin >> n >> m >> k;
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    }
    for(int i = 0;i < m;i++) cin >> b[i];
    cout << find(0,0,n,m,k-1) << endl;
}