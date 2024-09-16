#include <iostream>

using namespace std;
int a[100],n;
void print_solution(){
    for(int i = 0;i < n;i++){
        cout << a[i];
    }
    cout << endl;
}
void backtrack(int k){
    if(k == n){
        print_solution();
        return;
    }
    a[k] = 1;
    backtrack(k+1);
    a[k] = 0;
    backtrack(k+1);
}
int main(){
    cin >> n;
    backtrack(0);
}