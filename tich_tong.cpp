#include <iostream>

#define N int(1000000007)

using namespace std;
int a[1000000];
int main(){
    int n; cin >> n;
    long long int sum = 0,multi = 1;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum = (sum % N) + (a[i] % N);
        multi = ((multi % N) * (a[i] % N)) % N;
    } 
    cout << sum << endl << multi << endl;
}