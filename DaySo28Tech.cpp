#include <iostream>

using namespace std;
typedef long long int lld;
const lld mod = 1e9 + 7;
const lld N = 1e6 + 7;

int main(){
    int t; cin >> t;
    cin.ignore();
    lld f[N];
    f[1] = 2,f[2] = 8;
    for(int i = 3;i <= N;i++){
        f[i] = 2*(f[i-1] % mod) + 8*(f[i-2] % mod);
        f[i] %= mod;
    }
    while(t--){
        lld n; cin >> n;
        cout << f[n] << endl;
    }
}