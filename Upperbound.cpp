#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
int main(){
    int n,k; cin >> n;
    int a[n+1],b[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i = 0;i < n;i++){
        int *it = upper_bound(b,b+n,a[i]);
        if(it - b != n){
            cout << *it << ' ';
        }
        else cout << "_" << ' ';
    }
    

}