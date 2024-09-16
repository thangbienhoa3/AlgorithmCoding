#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector <string> v;
map <string,int> mp;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) v.push_back(tmp);
    for(int i = 0;i < v.size();i++){
        mp[v[i]]++;
    }
    map <string,int>:: iterator min = mp.begin();
    map <string,int>:: iterator max = mp.end();
    max--;
    cout << mp.size() << endl;
    cout << min->first << endl;
    cout << max->first << endl;


}