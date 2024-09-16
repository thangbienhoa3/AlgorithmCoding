#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <utility>
using namespace std;
typedef long long int lld;
set <lld> se;
void solve(int num){
    while(num > 0){
        se.insert(num % 10);
        num /= 10;
    }
}
int main(){
    lld n,m;
    cin >> n;
    pair <lld,lld> p[n+1];
    for(int i = 0;i < n;i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    lld checkin = p[0].first + p[0].second;
    for(int i = 1;i < n;i++){
        checkin = max(checkin,p[i].first);
        checkin = checkin + p[i].second;
    }
    cout << checkin << endl;
    
}