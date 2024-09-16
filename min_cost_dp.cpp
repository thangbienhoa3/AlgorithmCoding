#include <iostream>
#include <algorithm>
using namespace std;
int a[100000],n,s;

int main()
{
    cin >> n >> s;
    int dp[100000];
    for(int i = 0;i <= s;i++) dp[i] = -1;
    for(int i = 0; i < n;i++) cin >> a[i];
    dp[0] = 0;
    for(int i = 1; i <= s;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(a[j] <= i && dp[i-a[j]] != -1)
            {
                if(dp[i] != -1)
                {
                    dp[i] = min(dp[i],dp[i-a[j]] + 1);
                }
                else dp[i] = dp[i - a[j]] + 1;
            }
        }
    }
    cout << dp[s] << endl;
}