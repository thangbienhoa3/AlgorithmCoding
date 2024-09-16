#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
int main(){
    int n,k; cin >> n >> k;
    int a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
        int *it = lower_bound(a + i + 1,a+n,a[i]+k);
        if(*it == a[i] + k){
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "-1" << endl;

}