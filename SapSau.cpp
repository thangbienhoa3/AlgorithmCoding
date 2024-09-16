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
    string s; cin >> s;
    int cnta = 0,cntb = 0;
    for(int i = 0;i < s.length();i++){
    	if(s[i] == 'a') cnta++;
    	else cntb++;
    }
    if(abs(cnta-cntb) == 1 || abs(cnta - cntb) == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
