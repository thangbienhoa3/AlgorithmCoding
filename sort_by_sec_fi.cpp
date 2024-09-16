#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
vector < pair <int,int> > v;
int cmp(pair <int,int> p1,pair <int,int> p2){
    if(p1.second != p2.second){
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int a,b; cin >> a >> b;
        pair <int,int> tmp = make_pair(a,b);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0;i < v.size();i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}