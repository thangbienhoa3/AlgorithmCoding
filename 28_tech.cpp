#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string s = "28TECH";
    map <char,int> mp;
    int n; cin >> n;
    for(int i = 0;i < s.length();i++){
        mp[s[i]]++;
    }
    string res = "";
    int cnt = 0;
    for(int i = 0;i < n;i++){
        char c;
        cin >> c;
        c = toupper(c);
        if(mp.find(c) != mp.end() && mp[c] && i % 2 == 0){
            res.push_back(c);
            mp[c]--;
            cnt++;
        }
    }
    cout << cnt << endl;
    if(cnt == s.length()){
        cout << res << endl;
    }
    else{
        cout << "HCET82" << endl;
    }
    


    
}