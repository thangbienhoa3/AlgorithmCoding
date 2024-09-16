#include <iostream>

using namespace std;
int X[100],n,k;
int mark[100];
void print(){
    for(int i = 1;i <= n;i++){
        cout << X[i] << ' ';
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1;j <= n;j++){
        if(mark[j] == 0){
            X[i] = j;
            mark[j] = 1;
            if(i == n){
                print();
            }
            else {
                Try(i+1);
            }
            mark[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    Try(1);
}