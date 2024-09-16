#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;
vector < pair <int, pair <int,int> > > v;
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int a,b,c; cin >> a >> b >> c;
        pair <int,int> tmp = make_pair(b,c);
        pair <int,pair <int,int> > tmp1 = make_pair(a,tmp);
        v.push_back(tmp1);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < n;i++){
        cout << v[i].first << ' ' << v[i].second.first << ' ' << v[i].second.second << endl;
    }
}