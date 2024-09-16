#include <iostream>
#include <string>
#include <map>
using namespace std;
map <string,int> mp;
int main(){
    for(int i = 0;i < 10;i++){
        string nthh;
        int ptk;
        cin >> nthh >> ptk;
        mp[nthh] = ptk;
    }
    int n; cin >> n;
    cin.ignore();
    while(n--){
        int ptk = 0;
        string cthh; cin >> cthh;
        string nthh;
        for(int i = 0;i < cthh.length();i++){
            if(isdigit(cthh[i])){
                ptk += mp[nthh] * (cthh[i] - '0');
                nthh = "";
            }
            else nthh.push_back(cthh[i]);
        }   
        cout << ptk << endl;
    }
}