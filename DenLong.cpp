#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;
typedef long long int lld;

int main(){
    lld n,k; cin >> n >> k;
    double ans = -1.0;
    lld a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
        if(i == 0){
            ans = max(ans,(1.0000000000*(a[i])));
        }
        if(i == n - 1){
            ans = max(ans,(1.0000000000*abs((a[i] - k))));
        }
        else{
            ans = max(ans,(1.0000000000*(a[i] - a[i-1]))/2.0);
        }
    }
    cout << setprecision(10) << fixed<< ans << endl;
    
    
    

}