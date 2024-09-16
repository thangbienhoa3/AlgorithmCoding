#include <iostream>
#include <algorithm>

using namespace std;
typedef long long  lld;

int main(){
    lld n,k,cnt = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
        int *first = lower_bound(a+i+1,a+n,k - a[i]);
        int *last = upper_bound(a+i+1,a+n,k - a[i]);
        last--;
        cnt += last - first + 1;
    }
    cout << cnt << endl;
}