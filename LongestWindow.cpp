#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 5;
set <char> s1;
int main(){
    cin.tie() -> sync_with_stdio(0);
    string s; cin >> s;
    lld it1 = 0,it2 = 0,cnt = 0,disCnt = 0,ans = 0;
    for(it2 = 0;it2 < s.length();it2++){
        while(s1.find(s[it2]) != s1.end()){
            s1.erase(s[it1]);
            it1++;
        }
        if(s1.find(s[it2]) == s1.end()){
            s1.insert(s[it2]);
            ans = max(ans,it2 - it1 + 1);
        }
    }
    cout << ans << endl;
    
}