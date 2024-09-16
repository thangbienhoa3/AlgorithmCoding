#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1000][1000];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0;i <= s1.length();i++){
    	for(int j = 0;j <= s2.length();j++){
    		if(i == 0 || j == 0){
    			a[i][j] = 0;
    		}
    		else if(s1[i-1] == s2[j-1]){
    			a[i][j] += 1 + a[i-1][j-1];
    		}
    		else a[i][j] = max(a[i-1][j],a[i][j-1]);
    	}
    }
    cout << a[s1.length()][s2.length()] << endl;
}