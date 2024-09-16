#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector <int> v;
map <int,int> mp;
int n;
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        int c;
        cin >> c;
        v.push_back(c);
        mp[c]++;
    }
    for(int i = 0;i < v.size();i++){
        if(mp[v[i]]){
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] = 0;
        }
    }

}
