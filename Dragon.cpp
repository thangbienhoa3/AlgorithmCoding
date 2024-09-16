#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
using namespace std;
typedef long long int lld;

int main(){
    lld n,k; cin >> n >> k;
    pair <lld,lld> a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n);
    lld power = k;
    for(int i = 0;i < n;i++){
        if(power <= a[i].first){
            cout << "NO" << endl;
            return 0;
        }
        else{
            power += a[i].second;
        }
    }
    cout << "YES" << endl;


}
