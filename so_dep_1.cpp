#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int is_prime(int n){
    if(n <= 1) return 0;

    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0;i < s.length();i++){
        char tmp;
        int a;
        tmp = s[i] - '0';
        a = tmp;
        if(is_prime(a) == 0){
            sum = -1;
            break;
        }
        sum += tmp;
    }
    if(sum != -1 && is_prime(sum)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}