#include <iostream>
#include <algorithm>
using namespace std;

int n,weight,w[1000],pro[1000];
int res;


int main()
{
    cin >> n >> weight;
    for(int i = 0; i < n;i++) cin >> pro[i];
    for(int i = 0; i < n;i++) cin >> w[i];
    int dp[n+1][weight+1];
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0; j <= weight;j++)
        {
            if(i == 0 || j == 0) dp[i][j] = 0;
            else if(w[i - 1] <= weight)
            {
                dp[i][j] = max(pro[i-1] + dp[i-1][j - w[i-1]],dp[i-1][j]);
            }
            else if(w[i-1] > weight)
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][weight] << endl;
}