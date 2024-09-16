#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
int main(){
    lld n,k,ans; cin >> n >> k;
    lld a[n+1],b[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a + 1,a+n,greater <lld>());
    ans = a[0];
    for(int i = 1;i < n;i++){
        if(i <= k){
            ans += a[i];
        }
        else{
            ans -= a[i];
        }
    }
    cout << ans << endl;
    

}