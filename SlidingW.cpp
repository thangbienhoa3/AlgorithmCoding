#include <iostream>


using namespace std;
typedef long long int lld;
const lld N = 1e7 + 5;
lld a[N];
int main(){
    lld n,k,sum = 0,it1,it2,ans = -N; cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < k;i++) sum += a[i];
    ans = sum;
    it1 = 0, it2 = k - 1;
    if(k < n){
        for(int i = 1;i < n;i++){
            sum = sum - a[i-1] + a[i + k - 1];
            if(sum > ans){
                ans = sum;
                it1 = i;
                it2 = i + k - 1;
            }
        }
    }
    cout << ans << endl;
        for(int i = it1; i <= it2;i++){
            cout << a[i] << ' ';
        }
        cout << endl;

}