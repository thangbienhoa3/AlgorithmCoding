#include <iostream>
#include <map>

using namespace std;

int a[10001];
map <int,int> mp;
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0;i < n;i++){
        if(mp[a[i]]){
            cout << a[i] << ' ' << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}