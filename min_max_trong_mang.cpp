#include <iostream>
#include <map>
#include <vector>

using namespace std;

map <int,int> mp;
int main(){ 
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        mp[tmp]++;
    }
    int num; cin >> n;
    while(n--){
        int action; cin >> action;
        if(action == 1){
            int tmp; cin >> tmp;
            mp[tmp]++;
        }
        else if(action == 2){
            int tmp; cin >> tmp;
            if(mp[tmp]){
                mp[tmp] = 0;
            }
        }
        else if(action == 3){   
            for(auto it : mp){
                if(it.second){
                    cout << it.first << endl;
                    break;
                }
            }
        }
        else if(action == 4){
            map <int,int>:: reverse_iterator it = mp.rbegin();
            for(it = mp.rbegin();it != mp.rend();it++){
                if(it->second){
                    cout << it->first << endl;
                    break;
                }
            }
        }
    }
}