#include <iostream>
using namespace std;
const int N = 1e9 + 7;
typedef long long int lld;

lld binary_exponential(lld a,lld b){
    lld res = 1;
    while(b){
        if(b & 1){
            res = (res * a) % N;
        }
        a = (a * a) % N;
        b >>= 1;
    }
    return res;
}
int main(){
    string s;
    lld m,res = 1;
    lld mod = 0;
    cin >> s >> m;
    for(int i = 0;i < s.length();i++){
        mod = mod * 10 + s[i] - '0';
        mod %= N;
    }
    // chia dư luỹ thừa (n^m)mod N = (n mod N) ^ m mod N;
    cout << binary_exponential(mod,m) << endl;
}