#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map <int,int> mp;
int main(){
    int n; cin >> n;
    while(n--){
        int tmp;cin >> tmp;
        mp[tmp]++;
    }
    for(auto it : mp){
        if(it.second % 2 == 0){
            cout << it.first << " " << it.second << endl;
        }
    }
    cout << endl;
    for(auto it  = mp.rbegin(); it != mp.rend();it++){
        if(it->second % 2 == 0){
            cout << it->first << " " << it->second << endl;
        }
    }
}