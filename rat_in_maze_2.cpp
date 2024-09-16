#include <iostream>
using namespace std;

int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
int a[101][101];
int n,m,s,t,u,v;
void loang(int i,int j){
    a[i][j] = 0;
    for(int k = 0;k < 4;k++){
        int imoi = i + dx[k];
        int jmoi = j + dy[k];
        if(imoi >= 0 && jmoi >= 0 && imoi < n && jmoi < m && a[imoi][jmoi] == 1){
            loang(imoi,jmoi);
        }
    }
}
int main(){
    cin >> n >> m;
    cin >> s >> t >> u >> v;
    s--,t--,u--,v--;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    loang(s,t);
    if(a[u][v] == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}