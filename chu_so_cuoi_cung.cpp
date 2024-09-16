#include <iostream>
#include <math.h>
using namespace std;
typedef long long int lld;
int main(){
    lld n,k,m;
    cin >> n >> m >> k;
    lld res = 1,mod = 1,tmp = 10;
    while(k > 0){
        if(k % 2 == 1){
            mod *= tmp;
        }
        k >>= 1;
        tmp *= tmp;
    }
    while(m > 0){
        if(m & 1){
            res = (res * n) % mod;
        }
        n = (n*n) % mod;
        m >>= 1;
    }
    cout << res << endl;
}