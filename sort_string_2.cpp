#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <set>
using namespace std;

int sort_by_length(const string &v1,const string &v2){
    return v1.length() < v2.length();
}
set <string> se;
int main(){
    string s;
    getline(cin,s);
    for(int i = 0;i < s.length();i++){
        if(isalpha(s[i]) == 0){
            s[i] = ' ';
        }
    }
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        string a = tmp;
        reverse(a.begin(),a.end());
        if(a == tmp && se.find(tmp) == se.end()){
            v.push_back(tmp);
            se.insert(tmp);
        }
    }
    stable_sort(v.begin(),v.end(),sort_by_length);
    for(auto it : v){
        cout << it << ' ';
    }
    cout << endl;
}
