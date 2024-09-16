#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],diff[N],pre[N];
int main(){
    lld n,q,res = 0; cin >> n >> q;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    while(q--){
        int l,r; cin >> l >> r;
        diff[l-1]++;
        diff[r]--;
    }
    for(int i = 0;i < n;i++){
        if(i == 0) pre[i] = diff[i];
        else pre[i] = diff[i] + pre[i-1];
    }
    sort(pre,pre+n);
    sort(a,a+n);
    for(int i = 0;i < n;i++){
        res += pre[i]*a[i];
    }
    cout << res << endl;
}