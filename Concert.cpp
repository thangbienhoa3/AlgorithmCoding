#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

typedef long long int lld;

int main(){
    lld n,m; cin >> n >> m;
    multiset <lld> se;
    for(int i = 0;i < n;i++){
        lld price; cin >> price;
        se.insert(price);
    }
    for(int i = 0;i < m;i++){
        lld money; cin >> money;
        auto it = se.upper_bound(money);
        if(it != se.begin()){
            it--;
            cout << *it << endl;
            se.erase(it);
        }
        else cout << "-1" << endl;
    }
}