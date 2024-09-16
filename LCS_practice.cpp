#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int dp[100][100];
    for(int i = 0; i <= s1.length();i++)
    {
        for(int j = 0; j <= s2.length();j++)
        {
            if(i == 0 || j == 0) dp[i][j] = 0;
            else
            {
                if(s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1] + 1;
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }
    cout << dp[s1.length()][s2.length()] << endl;
}