#include <iostream>
using namespace std;

int dx[8] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[8] = {-1, +1, -2, +2, -2, +2, -1, +1};
int a[101][101];
int n,s,t,u,v;
void loang(int i,int j){
    a[i][j] = 0;
    for(int k = 0;k < 8;k++){
        int imoi = i + dx[k];
        int jmoi = j + dy[k];
        if(imoi >= 0 && jmoi >= 0 && imoi < n && jmoi < n && a[imoi][jmoi] == 1){
            loang(imoi,jmoi);
        }
    }
}
int main(){
    cin >> n;
    cin >> s >> t >> u >> v;
    s--,t--,u--,v--;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    loang(s,t);
    if(a[u][v] == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}