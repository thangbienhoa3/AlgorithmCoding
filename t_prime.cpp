#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e6 + 5;
lld a[N];
void prime(){
    a[0] = 1, a[1] = 1;
    for(lld i = 2;i*i <= N;i++){
        if(!a[i]){
            for(int j = i*i;j <= N;j += i){
                a[j] = 1;
            }
        }
    }
}
int main(){
    lld n,cnt = 0; cin >> n;
    prime();
    for(lld i = 1;i*i <= n;i++){
        if(!a[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
}