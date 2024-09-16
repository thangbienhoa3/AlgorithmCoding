#include <iostream>


using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < 2*n;i++){
        for(int j = 0;j < n;j++){
            if(i >= n && j < 2*n - i - 1) cout << "*";
            if(i < n && j <= i) cout << "*";
            cout << " ";
        }
        cout << endl;
    }
}