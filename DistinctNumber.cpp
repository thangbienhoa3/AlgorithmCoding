#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
typedef long long int lld;

int main(){
    lld n,k; cin >> n;
    set <lld> se;
    for(int i = 0;i < n;i++){
        lld a; cin >> a;
        se.insert(a);
    }
    cout << se.size() << endl;
    

}
