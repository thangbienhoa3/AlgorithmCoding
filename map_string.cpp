#include <iostream>
#include <map>
#include <string>
#include <climits>
using namespace std;
map <string,int> mp;
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string tmp; getline(cin,tmp);
        mp[tmp]++;
    }
    string player_with_max_goal,player_with_min_goal;
    int max_goal = INT_MIN,min_goal = INT_MAX;
    for(auto it : mp){
        if(it.second > max_goal){
            max_goal = it.second;
            player_with_max_goal = it.first;
        }
        if(it.second < min_goal){
            min_goal = it.second;
            player_with_min_goal = it.first;
        }
        cout << it.first << ' ' << it.second << endl;
    }
    cout << endl;
    cout << player_with_min_goal << ' ' << min_goal << endl;
    cout << player_with_max_goal << ' ' << max_goal << endl;

    
}