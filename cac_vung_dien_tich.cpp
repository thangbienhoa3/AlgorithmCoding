#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int n,m,cnt;
char a[100][100];
vector <int> res;
void loang(int i,int j){
    a[i][j] = '.';
    int imoi,jmoi;
    cnt++;
    for(int k = 0;k < 4;k++){
        imoi = i + dy[k];
        jmoi = j + dx[k];
        if(imoi >= 0 && jmoi >= 0 && imoi < n && jmoi < m){
            if(a[imoi][jmoi] == '*') loang(imoi,jmoi);
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
            if(a[i][j] == '*'){
                loang(i,j);
                res.push_back(cnt);
                cnt = 0;
            }   
        }
    }
    sort(res.begin(),res.end());
    for(int i : res){
        cout << i << ' ';
    }
}
