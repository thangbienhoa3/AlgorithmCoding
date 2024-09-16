#include <iostream>
#include <algorithm>


using namespace std;

int n,a[100];
int dp[100];
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];
    dp[0] = 1;
    for(int i = 1;i < n;i++)
    {
        dp[i] = 1;
        for(int j = 0;j < i;j++)
        {
            if(a[j] == a[i] - 1)
            {
                dp[i] = max(dp[i],1 + dp[j]);
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        cout << dp[i] << " ";
    }
}