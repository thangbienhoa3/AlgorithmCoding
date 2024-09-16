#include <iostream>

using namespace std;

int n,k, a[10005], stop = 0;
void khoitao(){
    for(int i = 1;i <= k;i++){
        a[i] = 1;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n){
        --i;
    }
    if(i == 0){
        stop = 1;
    }
    else{
        a[i]++;
        for(int j = i + 1;j <= k;j++) a[j] = 1;
    }
}
int main(){
    cin >> n >> k;
    khoitao();
    while(!stop){
        for(int i = 1;i <= k;i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}