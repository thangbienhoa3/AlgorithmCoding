#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <sstream>
using namespace std;

set <string> se1,se2,res;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i = 0;i < s1.length();i++){
        s1[i] = tolower(s1[i]);
    }
    for(int i = 0;i < s2.length();i++){
        s2[i] = tolower(s2[i]);
    }
    stringstream ss1(s1);
    string tmp;
    while(ss1 >> tmp){
        se1.insert(tmp);
    }
    stringstream ss2(s2);
    while(ss2 >> tmp){
        se2.insert(tmp);
    }
    for(auto it : se1){
        if(se2.find(it) == se2.end()){
            res.insert(it);
        }
    }
    for(auto it : res){
        cout << it << ' ';
    }
    cout << endl;
}