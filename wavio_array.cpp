#include <iostream>
#include <algorithm>
using namespace std;
int a[10000],n;
int main()
{

    cin >> n;
    vector <int> dp(n,1);
    for(int i = 0; i < n;i++) cin >> a[i];
    for(int i = 1; i < n;i++)
    {
        for(int j = 0; j < i;j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[j] + 1,dp[i]);
            }
        }
    }
    int max1 = dp[0];
    for(int i = 0; i < n;i++)
    {
        max1 = max(max1,dp[i]);
    }
    vector <int> dp2(n,1);
    for(int i = n-2; i >= 0;i--)
    {
        for(int j = n-1; j > i;j--)
        {
            if(a[j] < a[i])
            {
                dp2[i] = max(dp2[j] + 1,dp2[i]);
            }
        }
    }
    int max2 = dp2[0];
    for(int i = 0; i < n;i++)
    {
        max2 = max(max2,dp2[i]);
    }
    cout << max(max1,max2) << endl;
    
}