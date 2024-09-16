#include <iostream>

using namespace std;

int dp[1000][1000];

int main()
{
    int n,k; cin >> n >> k;
    int a[200005];
    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    
    dp[0][0] = 1;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 0; j <= k;j++)
        {
                dp[i][j] += dp[i - 1][j];
                if(j - a[i-1] >= 0)
                {
                    dp[i][j] += dp[i][j - a[i-1]];
                }
        }
    }
    cout << dp[n][k] << endl;
}