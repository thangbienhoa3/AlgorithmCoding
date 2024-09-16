#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 1;
lld a[N],diff[N],query[N+1][3];
int main(){
    int n,op,q1; cin >> n >> op >> q1;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(i == 0){
            diff[i] = a[i];
        }
        else diff[i] = a[i] - a[i-1];
    }
    
    for(int i = 1;i <= op;i++){
        int l,r,k; cin >> l >> r >> k;
        query[i][0] = l - 1;
        query[i][1] = r - 1;
        query[i][2] = k;
    }   
    while(q1--){
        int x,y; cin >> x >> y;
        for(int i = x;i <= y;i++){
            diff[query[i][0]] += query[i][2];
            diff[query[i][1] + 1] -= query[i][2];
        }
    }
    for(int i = 0;i < n;i++){
        if(i == 0) a[i] = diff[i];
        else a[i] = diff[i] + a[i-1];
    }
    for(int i = 0;i < n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;


}