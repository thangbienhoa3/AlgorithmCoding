#include <iostream>
#include <utility>
#include <vector>

using namespace std;
vector < pair < pair <int,int> ,int > > v;
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        pair <int,int> tmp_xy = make_pair(a,b);
        pair < pair <int,int> ,int > tmp = make_pair(tmp_xy,c);
        v.push_back(tmp);
    }
    for(int i = 0;i < n;i++){
        int res = v[i].first.first + v[i].first.second + v[i].second;
        cout << res << " ";
    }
    cout << endl;
}