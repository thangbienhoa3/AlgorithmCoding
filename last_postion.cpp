#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N];
int main(){
    int n,x; cin >> n >> x;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    lld *po = upper_bound(a,a+n,x);
    if(po - a == 0|| po - a == n){
        cout << "-1" << endl;
    }
    else if(a[po-a-1] != x){
        cout << "-1" << endl;
    }
    else{
        cout << po - a - 1 << endl;
    }
}