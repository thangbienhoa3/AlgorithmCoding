#include <iostream>


using namespace std;

int n;
int a[100];
int dp[100];
int main()
{
    int s;
    cin >> n >> s;
    for(int i = 0;i < n;i++) cin >> a[i];
    dp[0] = 1;
    for(int i = 0;i < n;i++)
    {
        for(int j = a[i];j <= s;j++)
        {
            dp[j] += dp[j - a[i]];
        }
    }
    cout << dp[s] << endl;
}
