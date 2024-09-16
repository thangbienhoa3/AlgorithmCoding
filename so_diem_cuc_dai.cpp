#include <iostream>

using namespace std;
int dx[8] = {-1,0,1,0,-1,1,-1,1};
int dy[8] = {0,-1,0,1,-1,-1,1,1};
int n,m,cnt;
int a[100][100];
int loang(int i,int j){
    int imoi,jmoi;
    for(int k = 0;k < 8;k++){
        imoi = i + dy[k];
        jmoi = j + dx[k];
        if(imoi >= 0 && jmoi >= 0 && imoi < n && jmoi < m){
            if(a[imoi][jmoi] >= a[i][j]){
                return 0;
            }
        }
    }
    return 1;
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
            cnt += loang(i,j);
        }
    }
    cout << cnt << endl;
}