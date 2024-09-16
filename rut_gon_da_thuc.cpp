#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <utility>
using namespace std;
// key là số mũ, value là hệ số
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        vector <pair <int,int> > v;
        map <int,int> mp;
        string s;
        getline(cin,s);
        for(int i = 0;i < s.length();i++){
            if(s[i] == '+'){
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            int he_so = tmp[0] - '0';
            int so_mu = tmp[3] - '0';
            pair <int,int> tmp = make_pair(so_mu,he_so);
            v.push_back(tmp);
        }
        for(int i = 0;i < v.size();i++){
            if(mp.find(v[i].first) == mp.end()){
                mp[v[i].first] = v[i].second;
            }
            else mp[v[i].first] += v[i].second;
        }
        vector <pair <int,int> > res;
        for(auto it = mp.begin();it != mp.end();it++){
            pair <int,int> tmp = make_pair(it->first,it->second);
            res.push_back(tmp);
        }
        for(int i = 0;i < res.size();i++){
            if(i != res.size() - 1){
                cout << res[i].second << "x^" << res[i].first << " + ";
            }
            else cout << res[i].second << "x^" << res[i].first << endl;
        }
    }
}