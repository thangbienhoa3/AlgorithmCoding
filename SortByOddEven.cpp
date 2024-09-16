#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lld;
// first là index, second là value

int main(){
    lld n,k; cin >> n;
    lld a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    if(n % 2 == 0){
        for(int i = 0;i < n/2;i++){
            cout << a[i] << ' ' << a[i + n / 2] << ' '; 
        }
    }
    else{
        for(int i = 0;i < n/2;i++){
            cout << a[i] << ' ' << a[i + n / 2 + 1] << ' '; 
        }
        cout << a[n / 2];
    }
    
    
    

}