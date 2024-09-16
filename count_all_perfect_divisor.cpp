#include <iostream>

using namespace std;
int a[1000000];
int main(){
    int n; cin >> n;
   
    for(int i = 1; i * i <= n;i++){
        for(int j = i * i; j <= n;j+= i * i){
            a[j]++;
        }
    }
    // bắt đầu từ 2, 2^2 = 4, thì tất cả những số có ước bằng 4 đều có 1 perfect square diviosor
    // cập nhật vào mảng 
    // lặp lại với n = 3 ....
    cout << a[n] << endl;

    
}