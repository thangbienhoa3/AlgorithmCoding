#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
set <char> res1,res2;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i = 0;i < s1.length();i++){
        if(s2.find(s1[i]) == string::npos){
            res1.insert(s1[i]);
        }
    }
    for(int i = 0;i < s2.length();i++){
        if(s1.find(s2[i]) == string::npos){
            res2.insert(s2[i]);
        }
    }
    for(auto it : res1){
        cout << it;
    }
    cout << endl;
    for(auto it : res2){
        cout << it;
    }
    cout << endl;
}