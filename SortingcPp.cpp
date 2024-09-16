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
    vector <int> v;
    int n; cin >> n;
    for(int i = 0;i < n;i++){
    	int x; cin >> x;
    	v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++){
    	cout << v[i] << ' ';
    }
    
}