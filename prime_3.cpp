#include <iostream>
#include <cstring>
using namespace std;
const long long int N = 1e7 + 1;
long long int a[N];
void prime(){
    a[0] = 1,a[1] = 1;
    for(int i = 2;i*i <= N;i++){
        if(a[i] == 0){
            for(int j = i*i;j <= N;j+=i){
                a[j] = 1;
            }
        }
    }
}
int check(long long int n){
    while(n > 0){
        int tmp = n % 10;
        n = n / 10;
        if(a[tmp]){
            return 0;
        }
    }
    return 1;
}
int main(){
    prime();
    int cnt = 0;
    int x,y; cin >> x >> y;
    for(int i = x;i <= y;i++){
        if(!a[i] && check(i)){
            cnt++;
        }
    }
    cout << cnt << endl;
}