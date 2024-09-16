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
            if(i == 1){
                a[j][i] += max(INT_MIN,max(a[j][i-1],a[j+1][i-1]));
            }
            a[j][i] += max(a[j-1][i-1],max(a[j][i-1],a[j+1][i-1]));
        }
    }
    
    for(int i = 1;i <= n;i++){
        res = max(res,a[i][n]);
    }
    cout << res << endl;
}