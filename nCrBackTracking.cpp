#include <iostream>

using namespace std;
int X[100],n,k;

void print(){
    for(int i = 1;i <= k;i++){
        cout << X[i] << ' ';
    }
    cout << endl;
}
void Try(int i){
    for(int j = X[i-1] + 1;j <= n - k + i;j++){
        X[i] = j;
        if(i == k){
            print();
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    Try(1);
}