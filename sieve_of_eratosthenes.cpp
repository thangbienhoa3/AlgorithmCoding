#include <iostream>

using namespace std;

void sieve_prime(int n){
    int a[n+1];
    for(int i = 0; i < n;i++) a[i] = 1;
    for(int i = 2;i * i <= n;i++){
        if(a[i]){
            for(int j = i * i;j <= n;j += i){
                a[j] = 0;
            }
        }
    }
    for(int i = 2;i <= n;i++){
        if(a[i]) cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n; cin >> n;
    sieve_prime(n);
}