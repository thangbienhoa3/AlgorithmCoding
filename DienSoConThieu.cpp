#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int lld;
int main(){

    lld n;
    cin >> n;
    lld a[n+1],cnt = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1;i < n;i++){
        if(a[i] - a[i-1] > 1){
            cnt += a[i] - a[i-1] - 1;
        }
    }
    cout << cnt << endl;
}