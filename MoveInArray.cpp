#include <iostream>

using namespace std;
int a[100][100];
int n,m,cnt;
// right i,j+1
// down i+1,j
void Try(int i,int j){
    if(i == n && j == m){
        cnt++;
    }
    if(i + 1 <= n){
        Try(i+1,j);
    }
    if(j + 1 <= m){
        Try(i,j+1);
    }
}
int main(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
        }
    }
    Try(1,1);
    cout << cnt << endl;
}