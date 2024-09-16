#include <iostream>

using namespace std;
int a[100][100];
int n,m;
// right i,j+1
// down i+1,j
// left i,j - 1
void Try(int i,int j,string s){
    a[i][j] = 0;
    if(i == n && j == n){
        cout << s << endl;
    }
    if(i + 1 <= n && a[i+1][j] == 1){
        s += "D";
        Try(i+1,j,s);
        s.pop_back();

    }
    if(j + 1 <= n && a[i][j+ 1] == 1){
        s += "R";
        Try(i,j+1,s);
        s.pop_back();
    }
    if(j - 1 >= 1 && a[i][j-1] == 1){
        s += "L";
        Try(i,j-1,s);
        s.pop_back();
    }
    if(i - 1 >= 1 && a[i-1][j] == 1){
        s += "U";
        Try(i-1,j,s);
        s.pop_back();
    }
    a[i][j] = 1;
}
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
    Try(1,1,"");
}