#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
map <string,vector <string> > mp;
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s,team1 = "",team2 = "";
        getline(cin,s);
        int i = 0;
        for(i = 0;i < s.length() && s[i] != '-';i++){
            team1 += s[i];
        }
        team1.pop_back();
        for(int j = i + 2;j < s.length();j++){
            team2 += s[j];
        }
        mp[team1].push_back(team2);
        mp[team2].push_back(team1);
    }
    for(auto it : mp){
        cout << it.first << " : ";
        sort(mp[it.first].begin(),mp[it.first].end());
        for(int i = 0;i < mp[it.first].size();i++){
            if(i == mp[it.first].size() - 1){
                cout << mp[it.first][i] << endl;
            }
            else{
            cout << mp[it.first][i] << ", ";}
        }
    }
    
}