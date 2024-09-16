#include <iostream>

using namespace std;

typedef long long int lld;

int main(){
    lld n; cin >> n;
    lld cnt = 0;
    lld res = n;
    for(int i = 2;i*i <= n;i++){
            cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt++;
            }
            if(cnt % 2 == 1){
                res *= i;
            }
        }
    if(n > 1) res *= n;
    cout << res << endl;
}