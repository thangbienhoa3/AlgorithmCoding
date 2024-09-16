#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int a[105][105],b[105][105];
int main(){
    int n,m,res = INT_MIN; cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            a[i][j] += max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]));
        }
    }
    for(int i = 1;i <= n;i++){
        res = max(res,a[n][i]);
    }
    cout << res << endl;
}