#include <iostream>

using namespace std;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int n,m,cnt,res;
int a[501][501];
void loang(int i,int j){
    a[i][j] = 0;
    cnt++;
    int imoi,jmoi;
    for(int k = 0;k < 4;k++){
        imoi = i + dy[k];
        jmoi = j + dx[k];
        if(imoi >= 0 && jmoi >= 0 && imoi < n && jmoi < m){
            if(a[imoi][jmoi] == 1){
                loang(imoi,jmoi);
            }
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] == 1){
                loang(i,j);
                if(cnt > res) res = cnt;
                cnt = 0;
                
            }
        }
    }
    cout << res << endl;
}