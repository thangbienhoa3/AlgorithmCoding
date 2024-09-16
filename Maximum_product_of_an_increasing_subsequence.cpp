#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n,a[100],dp[100],res = -INT_MAX;
int main()
{
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a[i];
        dp[i] = a[i];
    }
    for(int i = 1;i < n;i++){
        for(int j = 0; j < i;j++){
            if(a[i] > a[j] && dp[i] < dp[j] * a[i]) dp[i] = dp[j] * a[i];
        }
    }
    for(int j = 0;j < n;j++){
        res = max(res,dp[j]);
    }   
    cout << res << endl;
}