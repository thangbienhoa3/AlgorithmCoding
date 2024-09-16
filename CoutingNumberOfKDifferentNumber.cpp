#include <iostream>
#include <map>
using namespace std;

using ll = long long;

int pos[1000005];

int main(){
    int n, k; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    int left = 0, right;
    int ans = 0;
    for(right = 0; right < n; right++){
        mp[a[right]]++;
        while(mp[a[right]] > 1){
            mp[a[left]]--;
            if(mp[a[left]] == 0) mp.erase(a[left]);
            left++;
        }
        ans = max(ans,right - left + 1);
    }
    cout << ans << endl;
}