#include <iostream>

using namespace std;
const long long int N = 1e5 + 1,mod = 1e9 + 7;
long long int a[N],product = 1;
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        product *= tmp % mod;
        product %= mod;
    }
    cout << product << endl;
}