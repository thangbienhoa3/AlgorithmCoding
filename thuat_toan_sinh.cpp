#include <iostream>

using namespace std;
int n,check = 0; 
int a[1000];
void khoitao(){
    for(int i = 0;i < n;i++){
       a[i] = 0; 
    }
}
int end(){
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            return 0;
        }
    }
    check = 1;
    return 1;
}
void sinh(){
    for(int i = n - 1;i >= 0;i--){
        if(a[i] == 1){
            a[i] = 0;
        }
        else {
            a[i] = 1;
            break;
        }
    }
}
void print(){
    for(int i = 0;i < n;i++){
        cout << a[i];
    }
    cout << endl;
}
int main(){
    cin >> n;
    khoitao();
    while(!check){
        print();
        if(!end()){
            sinh();
        }
    }
}