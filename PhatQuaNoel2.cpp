#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
const lld maxs = 1e9 + 5;
lld a[N],b[N];
int main(){
    lld n,s,tmp = 0; cin >> n >> s;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        tmp += a[i];
    }
    if(tmp < s){
        cout << "-1" << endl;
    }
    lld sum = 0,it1 = 0,it2 = 0,ans = n+1;// k68_IT2_HUST
    // it1 là left
    // it2 là right
    for(it2 = 0;it2 < n;it2++){
        sum += a[it2];
        if(sum >= s){
            while(1){
                if(sum - a[it1] < s){
                    break;
                }
                sum -= a[it1];
                it1++;
            }
            ans = min(ans,it2 - it1 + 1);
        }
    }
    cout << ans << endl;
}
