#include <iostream>
#include <vector>

using namespace std;
const int N = 1000001;


long long int pre[N],a[N];
int main(){
    int n,q; cin >> n >> q;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        pre[i] = a[i] + pre[i-1];
    }
    while(q--){
        int l,r; cin >> l >> r;
        cout << pre[r+1] - pre[l] << endl;
    }
}