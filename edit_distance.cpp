#include <iostream>
#include <string>
using namespace std;

int tim_min(int a,int b,int c)
{
    int min = a;
    if(min > b) min = b;
    if(min > c) min = c;
    return min;
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int dp[100][100] = {0};
    int l1 = s1.length(); int l2 = s2.length();
    for(int i = 0; i <= l1;i++)
    {
        for(int j = 0; j <= l2;j++)
        {
            if(i == 0) dp[i][j] = j;
            else if(j == 0) dp[i][j] = i;
            else if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else if(s1[i-1] != s2[j-1])
            {
                dp[i][j] = 1 + tim_min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
            }
        }
    }
    cout << dp[l1][l2] << endl;

}