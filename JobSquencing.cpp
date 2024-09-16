#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct job{
    int id, deadline, profit;
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    job a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].deadline >> a[i].profit;
    }
    sort(a, a + n, [](job x, job y)->bool{
        return x.profit > y.profit;
    });
    int used[n] = {0};
    ll ans = 0;
    for(int i = 0; i < n; i++){
        //a[i].deadline - 1 => 0
        for(int j = a[i].deadline - 1; j >= 0; j--){
            if(used[j] == 0){
                ans += a[i].profit;
                used[j] = 1; break;
            }
        }
    }
    cout << ans << endl;
}