#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int a[1000005];
map <int,int> mp;
int main(){
    string s; cin >> s;
    int cnt0 = 0,cnt1 = 0,res = -1;
    mp[0] = -1;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '0'){
            cnt0++;
        }
        else cnt1++;
        if(mp.find(cnt1-cnt0) == mp.end()){
            mp[cnt1-cnt0] = i;
        }
        else res = max(res,i - mp[cnt1-cnt0]);
    }
    cout << res << endl;
    
}