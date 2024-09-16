#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

typedef long long int lld;

int main(){
    lld n,m; cin >> n;
    lld a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    lld sum = 1;
    for(int i = 0;i < n;i++){
        if(a[i] > sum){
            cout << sum << endl;
            return 0;
        }
        else sum += a[i];
    }
    cout << sum << endl;
    
}