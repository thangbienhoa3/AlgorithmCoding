#include <iostream>
#include <algorithm>
using namespace std;

int n,a[10000],dp[10000];

int main()
{
    cin >> n;
    for(int i = 0;i <n;i++) cin >> a[i];
    for(int i = 0;i < n;i++) dp[i] = 1;
    for(int i = 1;i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(a[i] > a[j]) dp[i] = max(dp[i],dp[j] + 1);
        }
    }
    int res = dp[0];
    for(int i = 0;i < n;i++)
    {
        res = max(res,dp[i]);
    }
    cout << res << endl;
}