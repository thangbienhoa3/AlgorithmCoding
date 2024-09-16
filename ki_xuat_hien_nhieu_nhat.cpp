#include <iostream>
#include <string>
#include <map>
#include <climits>
using namespace std;

map <char,int> mp;
int main(){
    string s; cin >> s;
    for(int i = 0;i < s.length();i++){
        mp[s[i]]++;
    }
    int min = INT_MAX,max = INT_MIN;
    char c_min,c_max;
    for(auto it : mp){
        if(it.second <= min){
            min = it.second;
            c_min = it.first;
        }
        if(it.second >= max){
            max = it.second;
            c_max = it.first;
        }
    }
    cout << c_max << ' ' << max << endl;
    cout << c_min << ' ' << min << endl;
    
}
