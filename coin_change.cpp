#include <iostream>
using namespace std;
int a[100000],n,s;

int main()
{
    int t; cin >> t;
    for(int i = 1;i <= t;i++)
    {
    cin >> n >> s;
    for(int i = 1; i <= n;i++) cin >> a[i];
    int dp[1000][1000] = {0};
    dp[0][0] = 1;
    for(int i = 1; i <= n;i++)
    {
        for(int j = 0;j <= s;j++)
        {
            if(i == 0 && j == 0) dp[i][j] = 1;
            else
            {
                dp[i][j] += dp[i-1][j];
                if(j - a[i-1] >= 0)
                {
                    dp[i][j] += dp[i][j-a[i]];
                }
            }
        }
    }
        cout << "Case " << i << ": "<< dp[n][s] % 100000007 << endl;
    }
}