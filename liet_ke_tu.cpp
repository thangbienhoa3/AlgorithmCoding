#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

set <string> se;
int main(){
    string s;
    getline(cin,s);
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(se.find(tmp) == se.end()){
            se.insert(tmp);
            v.push_back(tmp);
        }
    }
    for(auto it : se){
        cout << it << ' ';
    }
    cout << endl;
    for(int i = 0;i < v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}