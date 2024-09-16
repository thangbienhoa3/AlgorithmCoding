#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
map <string,string> mp;
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string tmp1,tmp2;
        getline(cin,tmp1);
        getline(cin,tmp2);
        mp[tmp2] = tmp1;
    }
    
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string tmp1,tmp2,name1,name2;
        int coin;
        cin >> tmp1 >> tmp2 >> coin;
        mp.find(tmp1) != mp.end() ? (name1 = mp[tmp1]) : name1 = "Unknown wallet";
        mp.find(tmp2) != mp.end() ? (name2 = mp[tmp2]) : name2 = "Unknown wallet";
        cout << name1 << " send " << coin << " bitcoin to " << name2 << endl;
    }
}