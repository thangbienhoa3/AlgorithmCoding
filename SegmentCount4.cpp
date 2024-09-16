#include <iostream>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
const lld MAX = 1e9 + 5;
lld a[N],b[N];
set <pair <lld,lld > > se;
int main(){
    lld n,k; cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    lld diff = 0,it1 = 0,it2 = 0,ans = 0,cnt = 0;// k68_IT2_HUST
    // it1 là left
    // it2 là right
    for(it2 = 0;it2 < n;it2++){
        pair <lld,lld> tmp = make_pair(a[it2],it2);
        se.insert(tmp);
        set <pair <lld,lld > >:: iterator F = se.begin(), E = se.end();
        E--;
        diff = E->first - F->first;
        while(diff > k){
            pair <lld,lld> tmp = make_pair(a[it1],it1);
            se.erase(tmp);
            set <pair <lld,lld > >:: iterator F = se.begin(), E = se.end();
            E--;
            diff = E->first - F->first;
            it1++;
        }
        if(diff <= k){
            cnt += it2 - it1 + 1;
        }
        
    }
    cout << cnt << endl;
}
