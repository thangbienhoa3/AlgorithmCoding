#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],tmp[N],x;
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
int cmp_abs(lld a,lld b){
    return abs(x-a) < abs(x-b);
}   
int cmp1(lld a,lld b){
    int r1 = a % 2,r2 = b % 2;
    if(r1 == 0 && r2 == 0){
        return a < b;
    }
    else if(r1 == 1 && r2 == 1){
        return a > b;
    }
    else if(r1 == 0 && r2 == 1){
        return 1;
    }
    return 0;
}

int main(){
    lld n; cin >> n >> x;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        tmp[i] = a[i];
    }
    sort(a,a+n,cmp_abs);
    stable_sort(tmp,tmp+n,cmp1);
    for(int i = 0;i < n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    for(int i = 0;i < n;i++){
        cout << tmp[i] << ' ';
    }
    cout << endl;

}