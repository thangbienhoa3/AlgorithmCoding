#include <iostream>

using namespace std;
typedef long long int lld;
const int N = 10e6 + 1;
lld a[N],diff[N];
int main(){
    int n; cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++){
        if(i == 1){
            diff[i] = a[i];
        }
        else diff[i] = a[i] - a[i-1];
        cout << diff[i] << ' ';
    }
    cout << endl;
}
