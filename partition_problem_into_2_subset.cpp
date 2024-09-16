#include <iostream>


using namespace std;
int n,sum = 0,a[100],dp[100][100];

int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0;i <= n;i++) dp[i][0] = 1;
    for(int i = 0;i <= sum;i++) dp[0][i] = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= sum;j++){
            dp[i][j] = dp[i-1][j];
            if(a[i - 1] <= j){
                dp[i][j] |= dp[i-1][a[i-1] - j];
            }
        }
         
    }
}