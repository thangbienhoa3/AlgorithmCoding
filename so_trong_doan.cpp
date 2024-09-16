#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N];
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int q; cin >> q;
    cin.ignore();
    sort(a,a+n);
    while(q--){
        int l,r; cin >> l >> r;
        lld *left = lower_bound(a,a+n,l);
        lld *right = upper_bound(a,a+n,r);
        cout << right - left << endl;

    }
}