#include <iostream>

using namespace std;

int main(){
    int a[105][105];
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
            if(i == 0 || j == 0 || i == n -1 || j == n - 1){
                cout << a[i][j] << ' ';
            }
        }
    }
}