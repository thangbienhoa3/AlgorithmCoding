#include <iostream>
#include <string>

using namespace std;


string s;

int main()
{
    getline(cin,s);
    int n = s.length();
    vector <int> v(256,-1);
    int dp[n+1];
    dp[0] = 1;
    for(int i = 1;i <= n;i++)
    {
        dp[i] = 2 * dp[i-1];
        if(v[s[i-1]] != -1)
        {
            dp[i] = dp[i] - dp[v[s[i-1]]];
        } 
        else v[s[i-1]] = i - 1;
    }
    cout << dp[n] << endl;
}