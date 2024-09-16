#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int a[105][105],b[105][105];
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
int n,m,res;
void count(int i,int j){
    int cnt = 0;
    for(int k = 0;k < 4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && b[i1][j1]){
            cnt++;
        }
    }
    res += 4 - cnt;
}
void loang(int i,int j){
    a[i][j] = 0;
    count(i,j);
    for(int k = 0;k < 4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1]){
            loang(i1,j1);
        }
    }
    
}
int main(){
    cin >> n >> m;
    int tmp = INT_MIN;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j]){
                loang(i,j);
                tmp = max(tmp,res);
                res = 0;
            }
        }
    }
    cout << tmp << endl;
}