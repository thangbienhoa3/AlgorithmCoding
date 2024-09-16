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
    int dp[weight+1];
    for(int i = 0; i <= weight;i++) dp[i] = 0;
    for(int i = 1;i <= n;i++)
    {
        for(int j = weight; j >= 0;j--)
        {
            if(w[i-1] <= j)
            {
                dp[j] = max(dp[j],dp[j - w[i-1]] + pro[i-1]);
            }
        }
    }
    cout << dp[weight] << endl;
}