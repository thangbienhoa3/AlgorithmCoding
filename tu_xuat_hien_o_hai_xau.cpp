#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

set <char> se1,res1,res2;
string s1,s2;
int main(){
    getline(cin,s1);
    getline(cin,s2);
    for(int i = 0; i < s1.length();i++){
        se1.insert(s1[i]);
        res2.insert(s1[i]);
    }
    for(int i = 0; i < s2.length();i++){
        if(se1.find(s2[i]) != se1.end()){
            res1.insert(s2[i]);
        }
        res2.insert(s2[i]);

    }
    for(auto it : res1) cout << it;
    cout << endl;
    for(auto it : res2) cout << it;
    cout << endl;
}