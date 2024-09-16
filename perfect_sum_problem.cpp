#include <iostream>


using namespace std;
int n,sum,a[100],dp[100][100];

int main()
{
    cin >> n >> sum;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i <= n;i++){
        dp[i][0] = 1;
    }
    for(int j = 0; j <= sum;j++){
        dp[0][j] = 0;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= sum;j++){
            dp[i][j] = dp[i-1][j];
            if(a[i - 1] <= j){
                dp[i][j] |= dp[i-1][j - a[i - 1]];
            }
        }
    }
    if(dp[n][sum]) cout << "YES" << endl;
}