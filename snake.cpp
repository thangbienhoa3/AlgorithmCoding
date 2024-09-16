#include <iostream>

using namespace std;
int a[105][105];
int main(){
    int n,m; cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++) cin >> a[i][j];
    }
    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            for(int j = 0;j < n;j++){
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
        else{
            for(int j = n - 1;j >= 0;j--){
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
}