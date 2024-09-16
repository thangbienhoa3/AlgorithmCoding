#include <iostream>

using namespace std;

int n,k,dp[10000];

int main()
{
    cin >> n >> k;
    dp[1] = k;
    dp[2] = k * k;
    for(int i = 3; i <= n;i++)
    {
        dp[i] = (k - 1) * (dp[i-1] + dp[i - 2]);
    }
    cout << dp[n] << endl;
}