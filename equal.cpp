#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e7 + 1;
lld a[N],b[N];
int main(){
    int n,m; cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    lld it1 = 0, it2 = 0,cnt =0;// k68_it2_hust
    while(it2 < m && it1 < n){
        if(a[it1] > b[it2]){
            it2++;
        }
        else if(a[it1] < b[it2]){
            it1++;
        }
        else{
            int tmp1 = a[it1], tmp2 = b[it2];
            lld cnt1 = 0,cnt2 = 0;
            while(a[it1] == tmp1){
                it1++;
                cnt1++;
            }
             while(b[it2] == tmp2){
                it2++;
                cnt2++;
            }
            cnt += cnt1 * cnt2;
        }
    }
    
    cout << cnt << endl;
    
}