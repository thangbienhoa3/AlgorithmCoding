#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
const lld maxs = 1e9 + 5;
lld a[N],b[N];

int main(){
    lld n,k; cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    lld p = 1,it1 = 0,it2 = 0,ans = 0,cnt = 0,cnt1 = 0;// k68_IT2_HUST
    // it1 là left
    // it2 là right
    while(it2 < n){
        p *= a[it2];
        if(p > k){
            while(it1 <= it2 && p > k){
                p %= a[it1++];
            }
        }
        if(p == k){
            cnt1 = 0;
            while(it2 + 1 < n && a[it2] == 1){
                cnt1++;
                it2++;
            }
            ans += cnt1 + 1;
        }
    }
    cout << ans << endl;
}
