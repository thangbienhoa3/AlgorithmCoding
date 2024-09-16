#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt_1 = 0,cnt_0 = 0,res = INT_MIN;
    map <int,int> mp;// lưu các index 
    mp[0] = -1;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '0'){
            cnt_0++;
        }
        else cnt_1++;
        if(mp.find(cnt_1 - cnt_0) != mp.end()){
            res = max(res,i - mp[cnt_1-cnt_0]);
        }
        else mp[cnt_1-cnt_0] = i;
    }
    cout << res << endl;
}