#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
typedef pair <int,int> ii;
vector <ii> v;

int cmp(ii a,ii b){
    int dis1= a.first * a.first + a.second*a.second;
    int dis2= b.first * b.first + b.second*b.second;
    if(dis1 != dis2){
        return dis1 < dis2;
    }
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second < b.second;
}
int main(){
    long long int a[100000];
    int t; cin >> t;
    for(int i = 0;i < t;i++){
        int x,y; cin >> x >> y;
        ii tmp = make_pair(x,y);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0;i < v.size();i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}