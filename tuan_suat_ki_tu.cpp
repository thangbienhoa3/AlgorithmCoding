#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map <char,int> mp;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length();i++){
        mp[s[i]]++;
    }
    for(auto it : mp){
        cout << it.first << ' ' << it.second << endl;
    }
    cout << endl;
    for(int i = 0; i < s.length();i++){
        if(mp[s[i]]){
            cout << s[i] << ' ' << mp[s[i]] << endl;
            mp[s[i]] = 0;
        }
    }
}