#include <iostream>

using namespace std;

int n;
int dp[1000];

int main()
{
    cin >> n;
    dp[0] = 1;
    if(n >= 1) dp[1] = 1;
    if(n >= 2) dp[2] = 2;
    for(int i = 3; i <= n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout << dp[n] << endl;
}