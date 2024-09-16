#include <iostream>
#include <set>
#include <vector>

using namespace std;
int dp[10000001];
int main(){
    int n,q;
    set <int> se;
    vector <int> v;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    for(int i = n - 1;i >= 0;i--){
        se.insert(v[i]);
        dp[i] = se.size();
    }
    cin >> q;
    while(q--){
        int l; cin >> l;
        cout << dp[l] << endl;
    }
}