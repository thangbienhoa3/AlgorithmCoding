#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair <int,int> a,pair <int,int> b){
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    pair <int,int> a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    int cnt = 1;
    int endtime = a[0].second;
    for(int i = 1;i < n;i++){
        if(a[i].first > endtime){
            cnt++;
            endtime = a[i].second;
        }
        
    }
    cout << cnt << endl;
}