#include <iostream>
#include <set>
using namespace std;
typedef long long int lld;

int main(){
    lld n; cin >> n;
    lld sumFac = 0;
    set <lld> se;
    while(n % 2 == 0){
        sumFac++;
        n /= 2;
        se.insert(2);
    }
    for(int i = 3;i*i <= n;i++){
        while(n % i == 0){
            sumFac++;
            n /= i;
            se.insert(i);
        }
    }
    if(n > 2) {
        sumFac++;
        se.insert(n);
    }
    if(sumFac == 3 && se.size() == 3){
        cout << "1" << endl;
    }
    else cout << "0" << endl;
}
