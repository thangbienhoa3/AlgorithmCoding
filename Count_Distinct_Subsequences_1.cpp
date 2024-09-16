#include <iostream>
#include <string>

using namespace std;


int main()
{
    string s1;
    cin >> s1;
    int n = s1.length();
    int dp[10000],count[256];
    for(int i = 0;i <= 256;i++) count[i] = -1;
    dp[0] = 1;
    for(int i = 1;i <= n;i++)
    {
        dp[i] = 2 * dp[i-1];
        cout << dp[i] << " ";
        if(count[s1[i-1]] != -1)
        {
            dp[i] = dp[i] - dp[count[s1[i-1]]];
        }
        count[s1[i-1]] = i - 1;
        cout << count[s1[i-1]] << endl;
    }
    cout << dp[n]<< endl;
}