#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],b[N];
int main(){
    int n,k; cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    lld *po = lower_bound(a,a+n,k);
    if(po - a == 0 && a[po - a] != k){
        cout << "NOT FOUND" << endl;
    }
    else if(a[po - a] == k){
        cout << k << ' ';
    }
    else cout << a[po - a - 1] << endl;

    
    
    
}