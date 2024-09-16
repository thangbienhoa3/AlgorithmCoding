#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e9 + 7;
int main(){
    lld a,b,res = 1; cin >> a >> b;
    a %= N;
    while(b > 0){
        if(b & 1){
            res = (res * a) % N;
        }
        a = (a * a) % N;
        b >>= 1;
    }
    cout << res << endl;
}