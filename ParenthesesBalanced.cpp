#include <bits/stdc++.h>
using namespace std;

using ll = long long;
string s;
int check(){
	stack <char> tmp;
	for(int i = 0;i < s.length();i++){
        if(tmp.empty()){
            tmp.push(s[i]);
        }
        else if((tmp.top() == '(' && s[i] == ')')
            || (tmp.top() == '{' && s[i] == '}')
            || (tmp.top()== '[' && s[i] == ']') ){
            tmp.pop();
        }
        else tmp.push(s[i]);
    }
    return tmp.empty();
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    if(check()) cout << "YES" << endl;
    else cout << "NO" << endl;

}