#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
const lld maxs = 1e9 + 5;
lld a[N],b[N];

int main(){
    lld n,s; cin >> n >> s;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    lld sum = 0,it1 = 0,it2 = 0,ans = 0,cnt = 0;// k68_IT2_HUST
    // it1 là left
    // it2 là right
    for(it2 = 0;it2 < n;it2++){
        sum += a[it2];
        while(sum > s){
            sum -= a[it1++];
        }
        if(sum <= s){
            ans += it2 - it1 + 1;
        }
    }
    cout << ans << endl;
}
