#include <iostream>

using namespace std;
typedef long long int lld;
const lld mod = 1e9 + 7;

int inv(int a) {
  return a <= 1 ? a : mod - (long long)(mod/a) * inv(mod % a) % mod;
}
int main(){
    int n; cin >> n;
    cout << inv(n) << endl;
}