#include <iostream>

using namespace std;
int main(){
    long long int n; cin >> n;
    if(n == 1 || n == 0){
        cout << "NO" << endl;
    }
    else{
        for(int i = 2;i*i <= n;i++){
            if(n % i == 0){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}