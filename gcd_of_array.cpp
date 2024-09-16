#include <iostream>

using namespace std;
int a[1000000];
int gcd(int a,int b){
    if(a == 0) return b;
    return gcd(b%a,a);
}
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int res = a[0];
    for(int i = 1;i < n;i++){
        res = gcd(a[i],res); 
    }
    cout << res << endl;
}