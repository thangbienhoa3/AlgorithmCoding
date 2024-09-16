#include <iostream>

using namespace std;
typedef long long int lld;
lld gt[21];

void ini(){
    gt[0] = gt[1] = 1;
    for(int i = 1;i < 21;i++){
        gt[i] = gt[i-1] * i;
    }
}
void TC(){
    int n,b,t,c; cin >> n >> b >> t >> c;
    int res = 0;
    for(int i = n;i >= b;i--){
        for(int j = n - i;j >= t;j--){
            int k = n - i - j;
            if(k >= c){
                res += gt[n]/(gt[i]*gt[j]*gt[k]);
            }
        }
    }
    cout << res << endl;
}
int main(){
    ini();
    int t; cin >> t;
    while(t--){
        TC();
    }
}