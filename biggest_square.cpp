#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int a[1005][1005],pre[1005][1005];
int main(){
    int n; cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int ans = INT_MIN;
    for(int i = 3; i <= n;i++){
        for(int j = 3;j <= n;j++){
            int x1 = i - 2,x2 = i,y1 = j - 2,y2 = j;
            ans = max(ans,pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1]);
        }
    }
    cout << ans << endl;
}