#include <iostream>

using namespace std;

int main(){
    int n,res = 0,k;
    cin >> n >> k;
    while(n){
        n = n/k;
        res += n;
    }
    cout << res << endl;
}