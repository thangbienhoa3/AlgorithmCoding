#include <iostream>

using namespace std;

int solve(int n){
    if(n == 1) return 1;
    if(n % 2 == 0) return 2;
    for(int i = 2;i*i <=n ;i++){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}
int main(){
    int n; cin >> n;
    for(int i = 1;i <= n;i++){
        cout << solve(i) << endl;
    }
}