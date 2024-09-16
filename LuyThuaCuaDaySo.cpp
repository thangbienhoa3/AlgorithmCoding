#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e9 + 7;
lld ans = 0;
int solve(lld a,lld b){
    a %= N;
    lld res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a) % N;
        }
        a = (a * a) % N;
        b >>= 1;
    }
    return res;
}
int main(){
    lld n; cin >> n;
    for(int i = 1;i <= n;i++){
        ans += solve(i,i);
        ans %= N;
    }
    cout << ans << endl;
}