#include <iostream>


using namespace std;

int n;
int dp[100][100];
int main()
{
    cin >> n;
    dp[1][1] = 1;
    for(int i = 2;i <= n;i++)
    {
        for(int j = 1;j <= i;j++) 
        {
            if(j == 1) dp[i][j] = dp[i-1][i-1];
            else dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
        }
    }
 
    cout << dp[n][n] << endl;
}