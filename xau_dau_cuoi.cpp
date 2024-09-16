#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int to_hop(int n){
    int sum = 1;
    for(int i = 1; i <= 2; i++){
        sum = sum * (n - 2 + i) / i;
    }
    return sum;
}
int main(){
    string s; cin >> s;
    map <char,int> mp;
    for(int i = 0;i < s.length();i++){
        mp[s[i]]++;
    }
    int res = 0;
        res += s.length();
    for(auto it : mp){
        if(it.second > 1) res += to_hop(it.second);
    }
    cout << res << endl;
}