#include <iostream>

using namespace std;
typedef long long ll;
int main(){
    int a,b,n;
    cin >> a >> b >> n;
    ll l = 0,r = 1ll * n * max(a,b);
    ll ans = -1;
    while(l <= r){
        ll mid = (l + r) / 2;
        ll x = mid / a,y = mid / b;
        if(x >= (double)n/y){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
}