#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

typedef long long int lld;
bool cmp(pair <int,int> a,pair <int,int> b){
    return a.second < b.second;
}
int main(){
    lld n,cnt = 1; cin >> n;
    pair <lld,lld> time[n+1];
    for(int i = 0;i < n;i++){
        cin >> time[i].first >> time[i].second;
    }
    sort(time,time+n,cmp);
    lld endtime = time[0].second;
    for(int i = 0;i < n;i++){
        if(time[i].first >= endtime){
            cnt++;
            endtime = time[i].second;
        }
    }
    cout << cnt << endl;
}