#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int lld;

int main(){
    lld n; cin >> n;
    lld a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater <lld> ());
    lld cnt = a[0];
    for(int i = 1;i < n;i++){
        if(a[i] - i <= 0){
            break;
        }
        cnt += a[i] - i;
    }
    cout << cnt << endl;
}