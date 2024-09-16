#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 5;
multiset <char> s1;
set <char> se;
int main(){
    cin.tie() -> sync_with_stdio(0);
    string s; cin >> s;
    lld it1 = 0,it2 = 0,cnt = 0,disCnt = 0,ans = N;
    for(int i = 0;i < s.length();i++) se.insert(s[i]);
    disCnt = se.size();
    for(it2 = 0;it2 < s.length();it2++){
        if(s1.find(s[it2]) == s1.end()){
            cnt++;
        }
        s1.insert(s[it2]);
        while(cnt == disCnt){
            s1.erase(s1.lower_bound(s[it1]));
            if(s1.find(s[it1]) == s1.end()){
                cnt--;
            }
            ans = min(ans,it2 - it1 + 1);
            it1++;
        }
    }
    cout << ans << endl;
    
}