#include <iostream>
#include <math.h>
using namespace std;

long long int a[1000000];
int check(int n){
    long long int a = 5*n*n -4;
    long long int b = 5*n*n + 4;
    long long int x = sqrt(a);
    long long int y = sqrt(b);
    if(x*x == a || y*y == b){
        return 1;
    }
    return 0;
}
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(check(a[i])){
            cout << a[i] << ' ';
            cnt++;
        }
    }
    if(cnt == 0) cout << "NONE" << endl;
}