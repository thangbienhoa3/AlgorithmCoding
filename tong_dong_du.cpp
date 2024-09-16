#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long int sum = 0;
    for(int i = 0;i < n;i++){
        long long int tmp; cin >> tmp;
        sum += tmp % 1000000007;
        sum %= 1000000007;
    }
    cout << sum << endl;
}