#include <iostream>
#include <algorithm>

using namespace std;
int a[10000],n,s;

int main()
{
    cin >> n >> s;
    int dp[n+1][s+1];
    for(int i = 0; i < n;i++) cin >> a[i];
    for(int i = 0; i <= s;i++) dp[0][i] = 0;
    for(int i = 0; i <= n;i++) dp[i][0] = 1;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= s;j++)
        {
            if(a[i] < j) dp[i][j] = dp[i-1][j];
            else
            {
                dp[i][j] = dp[i][j-a[i]] || dp[i-1][j];
            }
        }
    }
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= s;j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

}