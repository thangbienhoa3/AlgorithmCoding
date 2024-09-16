#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6+1;
const ll m = 1e9+7;
ll a[N];
void tribo(){
    a[0] = 0,a[1] = 0,a[2] = 1;
    for(int i = 3;i <= N;i++){
        a[i] = a[i-1]+a[i-2]+a[i-3];
        a[i] %= m;
    }   
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tribo();
    int t;cin >> t;
    while(t--){
        int k;cin >> k;
        cout << a[k] << endl;
    }

}