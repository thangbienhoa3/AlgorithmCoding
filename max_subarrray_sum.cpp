#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int n, a[10000];
const long long INF = 1e18;

int main()
{
 
        cin >> n;
        for(long long int i = 0; i < n;i++) cin >> a[i];
        long long int presum[10000] = {0},premin[10000] = {0};
        presum[0] = a[0];
        premin[0] = a[0];
        for(int i = 1; i < n;i++)
        {
            presum[i] += presum[i-1] + a[i];
            premin[i] = min(presum[i],premin[i-1]);
        }
        long long int ans = -INF;
        for(int i = 0; i < n;i++){
            ans = max(ans,presum[i] - premin[i]);
        }
        cout << ans << endl;
}