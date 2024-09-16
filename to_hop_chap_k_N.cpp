#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e9 + 7;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        lld k,n; cin >> n >> k;
        lld sum = 1;
        lld inv[1005];
        inv[0] = 1;
        if(k+1>=2) inv[1] = 1;
        for (int i = 2; i <= k; i++) {
            inv[i] = N - (N / i) * inv[N % i] % N;
        }
        int ans = 1;
        for (int i = 2; i <= k; i++) {
            ans = ((ans % N) * (inv[i] % N)) % N;
        }
        for (int i = n; i >= (n - k + 1); i--) {
            ans = ((ans % N) * (i % N)) % N;
        }
        cout << ans << endl;
    }
}