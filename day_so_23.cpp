#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
const lld mod = 1e9 + 7;

lld f[N];
int main(){
    lld n; cin >> n;
    f[1] = 1; f[2] = 1;
    for(int i = 3;i <= n;i++){
        f[i] = 2 * (f[i-1] % mod) + 3 * (f[i-2] % mod);
        f[i] %= mod;
    }
    cout << f[n] << endl;
}