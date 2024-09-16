#include <iostream>
#include <map>

using namespace std;

typedef long long int lld;
int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    map <lld,int> mp;
    mp[0] = 1;
    int ans = 0;
    lld sum = 0;
    for(int i = 0;i < n;i++){
        sum += a[i];
        if(mp.count(sum - k)){
            ++ans;
        }
        mp[sum] = 1;
    }
    cout << ans << endl;
}