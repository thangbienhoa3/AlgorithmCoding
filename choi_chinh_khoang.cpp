#include <iostream>
#include <climits>
using namespace std;

int n,k,a[100];
int dp[100][100] = {0};
void solve(){
    for(int i = 1; i <= k;i++){
        for(int j = 1;j <= n;j++){
            int res = INT_MIN;
            for(int m = 0;m < j;m++){
                res = max(res, a[j] - a[m] + dp[i-1][m]);
                // từ ngày 0 đến ngày thứ j - 1 ta lấy a[j] - a[m] là lợi nhuận giữa bán và mua 
            }
            dp[i][j] = max(dp[i][j - 1],res);
        }
    }
    for(int i = 0;i <= k;i++){
        for(int j = 0;j <= n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> n >> k;
    for(int i = 0;i < n;i++) cin >> a[i];
    solve();

}