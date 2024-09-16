#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int cmp(const pair <string,int> &p1,const pair <string,int> &p2){
    return p1.second > p2.second;
}
int main(){
    string s;
    map <string,int> mp;
    while(getline(cin,s))
    {
        vector <string> v;
        string tmp,t1 = "",t2 = ""; 
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        int i = 0;
        for(i = 0;i < v.size();i++){
            if(v[i + 1] == "-"){
                t1.pop_back();
                mp[t1] += stoll(v[i]);
                break;
            }
            else t1 += v[i] + ' ';
        }
        for(int j = i + 3;j < v.size();j++){
            t2 += v[j] + ' ';
        }
        t2.pop_back();
        mp[t2] += stoll(v[i+2]);
    }
    vector <pair <string,int> > res;

    for(map <string,int>:: iterator it = mp.begin();it != mp.end();it++){
        pair <string,int> tmp = make_pair(it->first,it->second);
        res.push_back(tmp);
    }
    sort(res.begin(),res.end(),cmp);
    for(int i = 0;i < res.size();i++){
        cout << res[i].first << ' ' << res[i].second << endl;
    }

    
}