#include <iostream>
#include <set>
using namespace std;
typedef long long int lld;

int main(){
    lld a,b; cin >> a >> b;
    for(lld j = a; j <= b;j++){
        lld cnt = 0;
        lld n = j;
        while(n % 2 == 0){
            cnt++;
            n /= 2;
        }
        if(cnt >= 2){
            cout << j << ' ';
            continue;
        }
        for(int i = 3;i*i <= n;i++){
            cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt++;
            }
            if(cnt >= 2){
                cout << j << ' ';
                break;
            }
        }
    }  
}
