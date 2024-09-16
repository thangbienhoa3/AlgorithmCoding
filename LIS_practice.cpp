#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n,a[100],dp[100];

int main()
{
    cin >> n;
    for(int i = 0; i < n;i++) cin >> a[i];
    dp[0] = 1;
    int res = -INT_MAX;
    for(int i = 1; i < n;i++)
    {
        for(int j = 0; j < i;j++)
        {
            if(a[i] > a[j] && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
        }
    }
    for(int i = 0;i < n;i++) res = max(res,dp[i]);
    cout << res;
    
}