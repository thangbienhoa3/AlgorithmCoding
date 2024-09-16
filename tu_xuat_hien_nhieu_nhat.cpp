#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;
map <string,int> mp;
int main(){
    string s;
    getline(cin,s);
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        mp[tmp]++;
    }
    int max = INT_MIN,min = INT_MAX;
    string res_max,res_min;
    for(auto it : mp){
        if(it.second <= min){
            min = it.second;
            res_min = it.first;
        }
        if(it.second >= max){
            max = it.second;
            res_max = it.first;
        }
    }
    cout << res_max << ' ' << max << endl;
    cout << res_min << ' ' << min << endl;


}