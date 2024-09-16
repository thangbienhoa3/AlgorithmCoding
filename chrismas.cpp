#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],b[N];
int main(){
    int n,s; cin >> n >> s;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    lld it1 = 0,it2 = 0,sum = 0,ans = 0;// k68_it2_hust
    // it1 là left
    // it2 là right
    while(it2 < n){
        sum += a[it2];
        if(sum <= s){
            ans = max(ans,it2 - it1 + 1);
        }
        else{
            while(sum > s){
                sum -= a[it1];
                it1++;
            }
        }
        it2++;
    }
    cout << ans << endl;
    
}
