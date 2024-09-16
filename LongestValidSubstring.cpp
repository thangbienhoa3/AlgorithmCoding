#include <bits/stdc++.h>
using namespace std;

using ll = long long;
string s;
int check(){
	stack <int> st;
	int res = 0;
	st.push(-1);
	for(int i = 0;i < s.length();i++){
		if(s[i] == '(') {
			st.push(i);
		}
		else{
			if(!st.empty()){
				st.pop();
			}
			if(!st.empty()) res = max(res,i - st.top());
			else st.push(i);
		}		
		cout << res << endl;
	}
	return res;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    cout << check() << endl;
}