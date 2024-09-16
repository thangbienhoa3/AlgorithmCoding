#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    string s; cin >> s;
    vector <char> v;
    set <char> se;
    for(int i = 0;i < s.length();i++){
        s[i] = tolower(s[i]);
        if(se.find(s[i]) == se.end()){
            v.push_back(s[i]);
            se.insert(s[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i = 1;i < v.size();i++){
        if(int(v[i]) != int(v[i-1]) + 1){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

}