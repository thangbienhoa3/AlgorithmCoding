#include <iostream>
#include <algorithm>
using namespace std;
int a[105][105],b[105][105];
int main(){
    int n,m; cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            a[i][j] += max(a[i-1][j],a[i][j-1]);
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            b[j][i] += max(b[j-1][i],b[j][i-1]);
        }
    }
    cout << max(a[n][m],b[n][m]) << endl;
}