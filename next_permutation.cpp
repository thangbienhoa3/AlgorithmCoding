#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e9 + 7;

int main(){
    lld n; cin >> n;
    lld res = 1;
    for(int i = 1;i <= n;i++){
        res = ((res % N) * (i % N)) % N;
        cout << res << endl;
    }
}