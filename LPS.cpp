#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

string s1;
int dp[100][100];

int main()
{
    cin >> s1;
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    for(int i = 1;i <= s1.length();i++){
        for(int j = 1;j <= s2.length();j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            if(s1[i-1] != s2[j-1]){
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout << dp[s1.length()][s2.length()] << endl;
}