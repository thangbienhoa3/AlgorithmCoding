#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

using ll = long long;

bool check(int a[], int n, int k, ll sum){
    int dem = 0;
    ll tong = 0;
    for(int i = 0; i < n; i++){
        tong += a[i];
        if(tong > sum){
            ++dem;
            tong = a[i];
        }
    }
    ++dem;
    return dem <= k;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll left = *max_element(a, a + n);
    ll right = accumulate(a, a + n, 0ll);
    ll ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, n, k, mid)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans << endl;
}