#include <iostream>
#include <map>
using namespace std;
map <char,int> mp1,mp2;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0;i < s1.length();i++){
        mp1[s1[i]]++;
    }
    for(int i = 0;i < s2.length();i++){
        mp2[s2[i]]++;
    }
    for(auto it : mp1){
        if(it.second != mp2[it.first]){
            cout << "29tech" << endl;
            return 0;
        }
    }
    for(auto it : mp2){
        if(it.second != mp1[it.first]){
            cout << "29tech" << endl;
            return 0;
        }
    }
    cout << "28tech" << endl;
}