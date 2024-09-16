#include <iostream>

using namespace std;
int a[25][25];
int dx[4] = {-1,-1,1,1};
int dy[4] = {-1,1,1,-1};
int n,cnt;
void loang(int i,int j){
    a[i][j] = 1;
    cnt++;
    for(int k = 0;k < 4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && j1 >= 0 && i1 < n && j1 < n && a[i1][j1] == 0){
            loang(i1,j1);
        }
    }
}
int main(){
    int s,t;
    cin >> n >> s >> t;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    loang(s-1,t-1);
    cout << cnt << endl;
}