#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e7 + 1;
lld a[N],b[N];
int main(){
    int n,m; cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    lld it1 = 0, it2 = 0,cnt =0;// k68_it2_hust :v
    while(it2 < m && it1 < n){
        if(b[it2] > a[it1]){
            it1++;
        }
        else{
            cout << it1 << ' ';
            it2++;
        }
    }
    while(it2 < m){
        cout << n << ' ';
        it2++;
    }
}