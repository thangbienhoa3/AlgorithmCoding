#include <iostream>

using namespace std;
typedef long long int lld;
const lld mod = 1e9 + 7;
lld a[1005][1005];
int main(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                a[i][j]%=mod;
            }
        }
    }
    int q; cin >> q;
    while(q--){
        int n,k; cin >> n >> k;
        cout << a[n][k] << endl;
    }
}