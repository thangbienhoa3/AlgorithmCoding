#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n;
int a[1000];
int dp[100];


int main()
{
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    dp[0] = 0;
    for(int i = 1;i < n;i++)
    {
        dp[i] = INT_MAX;
        for(int j = 0; j < i;j++)
        {
            if(i <= j + a[j] && dp[j] != INT_MAX)
            {
                dp[i] = min(dp[i],dp[j] + 1);
                break;
            }
        }
    }
    cout << dp[n-1] << endl;
}