#include <iostream>

using namespace std;
int n,a[25];
void print(){
    for(int i = 0;i < n;i++){
        cout << a[i];
    }
    cout << endl;
}
void solve(int k){
    if(k == n){
        print();
        return;
    }
    /*a[k] = 0;
    solve(k+1);
    a[k] = 1;
    solve(k+1);*/
    for(int j = 0;j <= 1;j++){
        a[k] = j;
        solve(k+1);
    }
}
int main(){
    cin >> n;
    solve(0);
}