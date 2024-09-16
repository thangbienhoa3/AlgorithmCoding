#include <iostream>

using namespace std;

int n,a[1000];
int dp[100][100];

int main()
{
    int sum; cin >> sum;
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];
    dp[0][0] = 1;
    for(int i = 1; i <= n;i++)
    {
        for(int j = 0;j <= sum;j++)
        {
            dp[i][j] += dp[i-1][j];
            if(a[i-1] <= j) dp[i][j] += dp[i][j-a[i-1]];
        }
    }
    int dp1[1000] = {0};
    cout << dp[n][sum] << endl;
    dp1[0] = 1;
    for(int i = 0;i < n;i++)
    {
        for(int j = a[i]; j <= sum;j++)
        {
            dp1[j] += dp1[j - a[i]];
        }
    }
    cout << dp1[sum] << endl;

}