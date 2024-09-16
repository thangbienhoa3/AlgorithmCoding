#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int a[1000005];
map <string,int> mp;
int main(){
    string s; cin >> s;
    int cnt2 = 0,cnt8 = 0,cntt = 0,res = 0;
    mp["0_0"] = 1;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '2'){
            cnt2++;
        }
        else if(s[i] == '8'){
            cnt8++;
        }
        else if(s[i] == 't'){
            cntt++;
        }
        string s28 = to_string(cnt2 - cnt8),s2t = to_string(cnt8 - cntt);
        string tmp = s28 + '_' + s2t;
        if(mp.find(tmp) != mp.end()){
           res += mp[tmp];
        }
        mp[tmp]++;
    }
    cout << res << endl;
    
}