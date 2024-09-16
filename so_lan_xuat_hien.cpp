#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map <int,int> mp;
vector <int> v,res;
int main(){
    int n;cin >> n;
    while(n--){
        int tmp; cin >> tmp;
        v.push_back(tmp);
        mp[tmp]++;
    }
    for(int i = v.size() - 1;i >= 0;i--){
        res.push_back(mp[v[i]]);
        mp[v[i]]--;
    }
    reverse(res.begin(),res.end());
    for(int i = 0;i < res.size();i++){
        cout << res[i] << " ";
    }

}