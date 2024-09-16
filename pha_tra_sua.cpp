#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],diff[N],pre[N];
int main(){
    // >= k thì thoả mãn
    // n là số lần thêm đường
    // q là số câu hỏi 
    int n,k,q; cin >> n >> k >> q;
    while(n--){
        int l,r;
        cin >> l >> r;
        diff[l - 1] += 1;
        diff[r] -= 1;
    }
    for(int i = 0;i < 200000;i++){
        if(i == 0) a[i] = diff[i];
        else a[i] = diff[i] + a[i-1];
    }
    for(int i = 1;i <= 200000;i++){
        pre[i] = pre[i-1];
        if(a[i-1] >= k){
            pre[i]++;
        }
    }
    while(q--){
        int x,y; cin >> x >> y;
        cout << pre[y] - pre[x-1]<< endl;
    }


}