#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 5;
multiset <lld> se;
int main(){
    cin.tie() -> sync_with_stdio(0);
    lld n,k; cin >> n >> k;
    vector <lld> a;
    for(int i = 0;i < n;i++){
        lld tmp; cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0;i < k;i++){
        se.insert(a[i]);
    }
    auto it = next(se.begin(),(k-1)/2);
    for(int i = k;i <= n;i++){
        cout << (*it) << ' ';
        if(i == n) break;
        se.insert(a[i]);
        if(a[i] < *it) --it;
        if(a[i-k] <= *it) ++it;
        se.erase(se.lower_bound(a[i-k]));
    }
}