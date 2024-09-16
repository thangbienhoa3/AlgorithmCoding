#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
long long int n;
map <long long int,long long int> mp;
vector <long long int> v;
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        long long int tmp; cin >> tmp;
        mp[tmp]++;
        v.push_back(tmp);
    }
    long long int query; cin >> query;
    while(query--){
        long long int t1,t2;
        cin >> t1 >> t2;
        if(t1 == 1){
            mp[t2]++;
            v.push_back(t2);
        }
        else if(t1 == 2 && find(v.begin(),v.end(),t2) != v.end() && mp[t2] > 0){
            mp[t2]--;
        }
        else if(t1 == 3){
            
            if(mp[t2] > 0 && find(v.begin(),v.end(),t2) != v.end()){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }

}   