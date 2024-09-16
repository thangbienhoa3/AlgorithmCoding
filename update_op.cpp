#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],diff[N];
int main(){
    int n,q; cin >> n >> q;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(i == 0){
            diff[i] = a[i];
        }
        else diff[i] = a[i] - a[i-1];
    }
    while(q--){
        int l,r,k;
        cin >> l >> r >> k;
        diff[l] += k;
        diff[r+1] -= k;
    }
    for(int i = 0;i < n;i++){
        if(i == 0) a[i] = diff[i];
        else a[i] = diff[i] + a[i-1];
    }
    for(int i = 0;i < n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;


}