#include <iostream>

using namespace std;

int n;

int main(){
    cin >> n;
    int left = 1,right = n*(n+1);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= 2*n - i + 1;j++){
            if(j <= n && j >= i){
                cout << left << "*";
                left++;
                continue;
            }
            if(j > n){
                cout << right << "*";
                right--;
                continue;
            }
            else cout << " ";
        }
        cout << endl;
    }

}