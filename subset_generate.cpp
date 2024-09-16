#include <iostream>

using namespace std;
int a[21],n,m;
void khoitao(){
    for(int i = 1;i <= m;i++){
        a[i] = i;
    }
}
void nextsub(){
    int k = m;
    while(a[k] == n - m + k){
        k--;
    }
    a[k]++;
    for(int i = k + 1;i <= m;i++){
        a[i] = a[k] + i - k;
    }
}
void print(){
    for(int i = 1;i <= m;i++){
        cout << a[i];
    }
    cout << endl;
}
int isend(){
    for(int i = 1;i <= m;i++){
        if(a[i] != n - m + i){
            return 0;
        }
    }
    return 1;
}
void sinh(){
    int stop = 0;
    while(!stop){
        print();
        if(!isend()){
            nextsub();
        }
        else stop = 1;
    }
}
int main(){
    cin >> n >> m;
    khoitao();
    sinh();
}