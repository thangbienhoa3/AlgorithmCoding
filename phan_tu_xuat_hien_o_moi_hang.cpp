#include <iostream>
#include <map>

using namespace std;

map <int,int> mp;
int n;
int main(){
    cin >> n;
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            int tmp; cin >> tmp;
            if(mp[tmp] == i){
                mp[tmp]++;
            }
        }
    }
    int cnt = 0;
    for(auto it : mp){
        if(it.second == n){
            cout << it.first << " ";
            cnt++;
        }
    }
    if(cnt == 0) cout << "NOT FOUND" << endl;
}