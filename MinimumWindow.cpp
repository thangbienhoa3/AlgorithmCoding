#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 5;
map <char,int> mp1,mp2;
int main(){
    cin.tie() -> sync_with_stdio(0);
    string s,cmp; cin >> s >> cmp;
    lld it1 = 0,it2 = 0,cnt = 0,disCnt = 0,ans = N;
    for(int i = 0;i < cmp.length();i++){
        mp2[cmp[i]]++;
        disCnt++;
    }
    lld imin,jmin;
    for(it2 = 0;it2 < s.length();it2++){
        mp1[s[it2]]++;
        if(mp2.find(s[it2]) != mp2.end() && mp1[s[it2]] == mp2[s[it2]]){
            cnt += mp1[s[it2]];
        }
        while(cnt == disCnt){
            if(mp2.find(s[it1]) != mp2.end() && mp1[s[it1]] <= mp2[s[it1]]){
                cnt--;
            }
            mp1[s[it1]]--;
            if(ans > it2 - it1 + 1){
                imin = it1;
                jmin = it2;
                ans = it2 - it1 + 1;
            }
            it1++;
        }
        
    }
    for(int i = imin;i <= jmin;i++){
        cout << s[i];
    }
    cout << endl;
    
}