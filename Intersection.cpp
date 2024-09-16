#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(){
    set <int> se1;
    int n,m; cin >> n >> m;
    vector <int> v1,res;
    map <int,int> mp;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v1.push_back(tmp);
        mp[tmp]++;
    }
    for(int i = 0;i < m;i++){
        int tmp; cin >> tmp;
        se1.insert(tmp);
    }
    for(int i = 0;i < n;i++){
        if(se1.find(v1[i]) != se1.end() && mp[v1[i]]){
            cout << v1[i] << ' ';
            mp[v1[i]] = 0;
        }
    }
    cout << endl;
    
}