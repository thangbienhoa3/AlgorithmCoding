#include <iostream>
#include <string>

using namespace std;
const int n = 1e9 + 7;
int main(){
    string s;
    long long int m,mod = 0; cin >> s >> m;
    // tìm s mod 1e9 + 7
    for(int i = 0;i < s.length();i++){
        mod = (mod * 10) + s[i] - '0';
        mod %= 1000000007;
    }
    long long int res = 1;
    // binary exponentiation
    while(m){
        if(m & 1){
            res = (res * mod) % 1000000007;
        }
        mod = (mod * mod) % 1000000007;
        m >>= 1;
    }
    cout << res << endl;
}