#include <iostream>

using namespace std;
typedef long long int lld;
const lld mod = 1e9+7;
int main(){
    lld t; cin >> t;
    lld res = 1;
    cin.ignore();
    while(t--){
        lld p,e;
        cin >> p >> e;
        res = ((res % mod)*((e+1) % mod)) % mod;
    }
    cout << res << endl;
}