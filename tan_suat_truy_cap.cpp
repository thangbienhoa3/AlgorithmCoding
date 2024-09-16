#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string s;
    map <string,int> mp;
    while(cin >> s){
        mp[s]++;
    }
    for(auto it : mp){
        cout << it.first << ' ' << it.second << endl;
    }
}