#include <iostream>

using namespace std;
int n,s,t;
int a[100][100],cnt = 0;
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
void loang(int i,int j){
    cnt++;
    a[i][j] = 1;
    for(int k = 0;k < 4;k++){
        int imoi = i + dx[k];
        int jmoi = j + dy[k];
        if(imoi >= 0 && jmoi >= 0 && imoi < n && jmoi < n && a[imoi][jmoi] == 0){
            loang(imoi,jmoi);
        }
    }
}
int main(){
    cin >> n >> s >> t;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++) cin >> a[i][j];
    }
    loang(s-1,t-1);
    cout << cnt << endl;
}