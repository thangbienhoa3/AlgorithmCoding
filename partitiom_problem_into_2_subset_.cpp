#include <iostream>
#include <algorithm>
using namespace std;

int totalsum = 0,n,a[100],dp[100][100];
int solve(int i,int sum)
{
    if(i == n){
        int tmp = totalsum - 2*sum;
        if(tmp > 0) return tmp;
        else return -1 * tmp;
    }
    if(dp[i][sum] != -1){
        return dp[i][sum];
    }
    else{
        int pick =  solve(i + 1,sum + a[i - 1]);
        int notpick = solve(i + 1,sum);
        return dp[i][sum] = min(pick,notpick);
    }

}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        totalsum += a[i];
    }
    for(int i = 0; i <= n;i++){
        for(int j = 0;j <= totalsum;j++) dp[i][j] = -1;
    }
    cout << solve(0,0) << endl;
}