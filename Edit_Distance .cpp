#include <iostream>
#include <string>


using namespace std;

int fmin(int a,int b,int c)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.length(),m = s2.length();
    int dp[1000][1000];
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= m;j++)
        {
            if(i == 0) dp[i][j] = j;
            else if(j == 0) dp[i][j] = i;
            else if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else if(s1[i-1] != s2[j-1]) dp[i][j] = 1 + fmin(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
        }
    }
    
    cout << dp[n][m] << endl;
}