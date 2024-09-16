#include <iostream>

using namespace std;

int n,k,a[105],stop1 = 0,stop2;
void khoitao(){
    for(int i = 1;i <= n;i++){
        if(i <= n - k) a[i] = 0;
        else a[i] = 1;
    }
}
int check(){
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(a[i]) cnt++;
    }
    return cnt == k;
}
int check1(){
    int b[25];
    b[0] = 0;
    int cnt = -1;
    for(int i = 1;i <= n;i++){
        if(a[i]){
            b[i] = 1;
            if(a[i] == a[i-1]) b[i] += b[i-1];
        }
        else b[i] = 0;
        cnt = max(cnt,b[i]);
    }
    return cnt == k;
}
void sinh(){
    int i = n;
    while(i > 0 && a[i]) i--;
    if(i == 0){
        stop1 = 1;
    }
    a[i] = 1;
    for(int j = i + 1;j <= n;j++){
        a[j] = 0;
    }
}
int main(){
    cin >> n >> k;
    khoitao();
    while(!stop1){
        if(check()){
            for(int i = 1;i <= n;i++){
                cout << a[i];
            }
            cout << ' ';
        }
        sinh();
    }
    cout << endl;
    khoitao();
    stop1 = 0;
    while(!stop1){
        if(check1()){
            for(int i = 1;i <= n;i++){
                cout << a[i];
            }
            cout << ' ';
        }
        sinh();
    }
}