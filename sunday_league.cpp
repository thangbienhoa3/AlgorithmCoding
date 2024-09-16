#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
map <string,int> team;
int mp_cmp(const pair <string,int> &team1,const pair <string,int> &team2){
    if(team1.second == team2.second) return team1.first < team2.first;
    return team1.second > team2.second;
}
int main(){
    string str = "";
    while(getline(cin,str)){
        int i = 0;
        string team1 = "",team2 = "";
        while(str[i] != '-'){
            team1 += str[i];
            i++;
        }
        team1.pop_back();
        i += 2; 
        while(i < str.length()){
            team2 += str[i];
            i++;
        }
        team[team1]++,team[team2]++;
    }
    vector < pair <string,int> > mp_sort;
    for(auto it : team){
        pair <string,int> tmp = make_pair(it.first,it.second);
        mp_sort.push_back(tmp);
    }
    sort(mp_sort.begin(),mp_sort.end(),mp_cmp);
    for(auto it : mp_sort){
        cout << it.first << ' ' << it.second << endl;
    }
}