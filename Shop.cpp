#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair <int,int> a,pair <int,int> b){
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    vector <pair <int,int> > v;
    for(int i = 0;i < n;i++){
        int start,end; cin >> start >> end;
        pair <int,int> tmp1 = make_pair(start,1);
        pair <int,int> tmp2 = make_pair(end,-1);
        v.push_back(tmp1);
        v.push_back(tmp2);
    }
    sort(v.begin(),v.end());
    int cnt = 0,ans = 0;
    for(int i = 0;i < v.size();i++){
        cnt += v[i].second;
        ans = max(ans,cnt);
    }
    cout << ans << endl;
}