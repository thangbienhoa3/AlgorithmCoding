#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],b[N];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    sort(b,b+m);
    for(int i = 0;i < n;i++){
        lld *po = lower_bound(b,b+m,a[i]);
        cout << m - (po - b) << ' ';
    }
    
    
}