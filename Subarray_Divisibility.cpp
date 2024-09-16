#include <iostream>
#include <vector>
#include <set>

using namespace std;
int a[200001],presum[200001],n;
set <int> s;

int main()
{
    int t; cin >> t;
     cin.ignore();
    while(t--){
        cin >> n;
        int k; cin >> k;
        for(int i = 0; i < n;i++) cin >> a[i];
        presum[0] = a[0];
        for(int i = 1; i < n;i++) presum[i] = presum[i-1] + a[i];
        int cnt[19999];
        vector <int> v;
        for(int i = 0; i < n;i++) cnt[presum[i] % k]++;
        for(int i = 0; i < k;i++) v.push_back(cnt[i]);
        int ans = v[0]*(v[0] + 1) / 2;
        /*for(int i = 1; i < v.size();i++)
        {
            if(v[i] >= 2) ans += v[i] * (v[i] -  1) / 2;
        }*/
        for(int i = 0; i < v.size();i++) cout << v[i] << " ";
        ans = 0;
        v.clear();
        cout << endl;
    }
}