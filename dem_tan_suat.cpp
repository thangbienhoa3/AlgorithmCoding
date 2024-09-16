#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector <char> v;
map <char,int> mp;
int n;
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        char c;
        cin >> c;
        v.push_back(c);
        mp[c]++;
    }
    cout << mp.size() << endl;
    for(int i = 0;i < v.size();i++){
        if(mp[v[i]]){
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] = 0;
        }
    }

}