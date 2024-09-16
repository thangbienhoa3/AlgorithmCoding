#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <utility>
using namespace std;
multimap <string, vector < pair <int,int> > > mp;
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string tmp = "";
        cin >> tmp;
        pair <int,int> tmp_score;
        int credit,score;
        cin >> credit >> score;
        tmp_score = make_pair(credit,score);
        mp.insert({tmp,tmp_score});
    }
    for(auto it : mp){
        double res = 0,total_credit = 0,total_score = 0;
        cout << it.first << " : ";
        cout << res << endl;
    }
}