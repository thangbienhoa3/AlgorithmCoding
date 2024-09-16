#include <iostream>
#include <map>
#include <vector>
using namespace std;

map <int,int> mp;
vector <int> v;
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
        mp[tmp]++;
    }
    for(int i = 0;i < n;i++){
        if(mp[v[i]]){
            cout << v[i] << " ";
            mp[v[i]] = 0;
        }   
    }
    cout << endl;
}