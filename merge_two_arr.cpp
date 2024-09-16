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
    lld it1 = 0, it2 = 0;// k68_it2_hust :v
    while(it1 != n && it2 != m){
        if(a[it1] < b[it2]){
            cout << a[it1] << ' ';
            it1++;
        }
        else if(a[it1] >= b[it2]){
            cout << b[it2] << ' ';
            it2++;
        }
    }
    for(int i = it1; i < n;i++){
        cout << a[i] << ' ';
    }
    for(int i = it2;i < m;i++){
        cout << b[i] << ' ';
    }
}