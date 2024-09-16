#include <iostream>
#include <algorithm>
using namespace std;
int a[201][201];
int main(){
    int n; cin >> n;
    for(int i =0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
        sort(a[i],a[i]+n);
        for(int j = 0;j < n;j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}