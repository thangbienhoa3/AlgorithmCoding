#include <iostream>

using namespace std;
int a[100000],n,s,dp[1000][1000];


int solve(int N,int S)
{
    if(N == 0 || S < 0) return 0;
    if(S == 0) return dp[N][S] = 1;
    if(dp[N][S] != -1) return dp[N][S];
    else
    {
        return dp[N][S] = solve(N-1,S) + solve(N,S-a[N-1]);
    }
}
int main()
{
    int t; cin >> t;
    for(int i = 1;i <= t;i++)
    {
        cin >> n >> s;
        for(int i = 0;i < n;i++) cin >> a[i];
        for(int i = 0;i <= n;i++)
        {
            for(int j = 0;j <= s;j++){
                dp[i][j] = -1;
            }
        }
        cout << "case " << i << ": " << solve(n,s) % 100000007 << endl;
    }
}