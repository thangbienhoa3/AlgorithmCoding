#include <iostream>
#include <algorithm>
using namespace std;

int n, a[100],dp[100];
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++) dp[i] = a[i];
    for(int i = 1;i < n;i++)
    {
        for(int j = 0;j < i;j++)
        {
            if(a[j] < a[i] && dp[i] < dp[j] + a[i]) dp[i] = dp[j] + a[i];
        }
    }
    int max1 = 0;
    for(int i = 0;i < n;i++) max1 = max(max1,dp[i]);
    cout << max1 << endl;
}