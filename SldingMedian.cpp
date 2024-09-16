#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef long long int lld;
const lld N = 1e6+7;
lld a[N];
int main(){
    lld n,k,sum = 0; cin >> n >> k;
    multiset <lld> se;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < k;i++){
        se.insert(a[i]);
        sum += a[i];
    }
    multiset <lld>:: iterator it = se.lower_bound(sum/k);
    cout << *it << ' ';
    for(int i = 1;i < n - k + 1;i++){
        multiset <lld>:: iterator it1 = se.find(a[i-1]);
        se.erase(it1);
        se.insert(a[i+k-1]);
        sum += a[i+k-1];
        sum -= a[i-1];
        multiset <lld>:: iterator it2 = se.lower_bound(sum/k);
        if(it2 == se.begin()) cout << *it2 << ' ';
        else {
            double m1 = double(*it2) - double(sum)/k,m2 = double(sum)/k - double(*(--it2));
            lld m = m1 < m2 ? *(++it2) : *it2;
            cout << m << ' ';
        }
    }   
    cout << endl;
}
