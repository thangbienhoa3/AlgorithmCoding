#include <iostream>
#include <set>
using namespace std;
typedef long long int lld;

int main(){
    lld t; cin >> t;
    while(t--){
        lld n; cin >> n;
        lld res = -1;
        while(n % 2 == 0){
            n /= 2;
        }
        for(int i = 3;i*i <= n;i++){
            while(n % i == 0){
                n /= i;
                if(i > res) res = i;
            }
        }  
        if(n > 2) cout << n << endl;
        else cout << res << endl;
    }   
}
