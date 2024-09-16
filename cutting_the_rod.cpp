#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[1000];
int dp[100][100];
int ans;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= n;j++)
        {
            if(i == 0 || j == 0) dp[i][j] = 0;
            if(i == 1) dp[i][j] = a[i - 1] * j;
            else if(i > j) dp[i][j] = dp[i-1][j];
            else if(i <= j) dp[i][j] = max(a[i-1] + dp[i][j - i],dp[i-1][j]);
        }
    }
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= n;j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n][n] << endl;
}