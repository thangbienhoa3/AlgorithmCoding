#include <iostream>

using namespace std;
const int N = 1000;
long long int a[N][N],pre[N][N];
int main(){
    int n,m; 
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int q; cin >> q;
    while(q--){
        int x1,x2,y1,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] << endl;
    }
}