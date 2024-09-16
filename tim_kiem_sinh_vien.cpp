#include <iostream>
#include <string>
#include <map>

using namespace std;

map <string,string> mp;

int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string mssv,name;
        getline(cin,mssv);
        getline(cin,name);
        mp[mssv] += name;
    }
    
    int query; cin >> query;
    while(query--){
        string mssv; cin >> mssv;
        if(mp.find(mssv) != mp.end()){
            cout << mp[mssv] << endl;
        }
        else{
            cout << "NOT FOUND" << endl;
        }
    }

}