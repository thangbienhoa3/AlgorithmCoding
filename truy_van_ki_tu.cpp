#include <iostream>
#include <set>
#include <map>
#include <climits>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    map <char,int> mp;
    for(int i = 0;i < s.length();i++){
        mp[s[i]]++;
    }
    int max = INT_MIN,min = INT_MAX;
    char char_max = ' ',char_min = ' ';
    for(auto it : mp){
        if(max <= it.second && char_max < it.first){
            max = it.second;
            char_max = it.first;
        }
        else if(min >= it.second && char_min > it.second){
            min = it.second;
            char_min = it.first;
        }
    }
    cout << char_max << " " << max << endl;
    cout << char_min << " " << min << endl;
    cout << mp.size() << endl;

}