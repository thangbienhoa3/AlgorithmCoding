#include <iostream>
#include <math.h>
using namespace std;
long long pow(long long int a, long long int b)
{
    long long res = 1;
    while (b) {
        if (b & 1){
            res = (res * a) % 1000000007;
        }
        a = (a * a) % 1000000007;
        b >>= 1;
    }
    return res;
}
int main(){
    string s;
    long long int m,mod = 0;
    cin >> s >> m;
    for(int i = 0;i < s.length();i++){
        mod = mod * 10 + s[i] - '0';
        mod %= 1000000007;
    }
    cout << pow(mod,m) << endl;
}