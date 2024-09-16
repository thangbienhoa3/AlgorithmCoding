#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int sort_by_length(const string &v1,const string &v2){
    if(v1.length() == v2.length()){
        return v1 < v2;
    }
    return v1.length() < v2.length();
}
int main(){
    string s;
    getline(cin,s);
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) v.push_back(tmp);
    sort(v.begin(),v.end());
     for(auto it : v){
        cout << it << ' ';
    }
    cout << endl;
    sort(v.begin(),v.end(),sort_by_length);
    for(auto it : v){
        cout << it << ' ';
    }
    cout << endl;
}