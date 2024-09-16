#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],tmp[N];
lld tach_chan(lld n){
    lld r = 0;
    lld cnt = 0;
    while(n>0){
        r = n % 10;
        n /= 10;
        if(r % 2 == 0){
            cnt++;
        }
    } 
    return cnt;
}
lld tach_le(lld n){
    lld r = 0;
    lld cnt = 0;
    while(n>0){
        r = n % 10;
        n /= 10;
        if(r % 2 != 0){
            cnt++;
        }
    } 
    return cnt;
}
int cmp1(lld a,lld b){
    if(tach_chan(a) != tach_chan(b)){
        return tach_chan(a) < tach_chan(b);
    }
    return a < b;
}
int cmp2(lld a,lld b){
    return tach_le(a) < tach_le(b);
}
int main(){
    lld n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        tmp[i] = a[i];
    }
    sort(a,a+n,cmp1);
    stable_sort(tmp,tmp+n,cmp2);
    for(int i = 0;i < n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    for(int i = 0;i < n;i++){
        cout << tmp[i] << ' ';
    }
    cout << endl;

}