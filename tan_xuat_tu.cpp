#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

map <string,int> mp;
int sort_by_freq(const pair <string,int> &v1,const pair <string,int> &v2){
    if(v1.second == v2.second){
        return v1.first < v2.first;
    }
    return v1.second > v2.second;
}
int main(){
    string s;
    getline(cin,s);
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) {
        if(mp.find(tmp) == mp.end()){
            v.push_back(tmp);
        }
        mp[tmp]++;
    }
    for(auto it : mp){
        cout << it.first << ' ' << it.second << endl;
    }
    cout << endl;
    for(int i = 0;i < v.size();i++){
        cout << v[i] << ' ' << mp[v[i]] << endl;
    }

}