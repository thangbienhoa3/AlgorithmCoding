#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1;i <= 2*n;i++){
        for(int j = 1;j <= n;j++){
            if(i <= n + 1 && j >= n - i + 1){
                cout << "*";
            }
            if(i > n + 1 && j >= i - n){
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
}