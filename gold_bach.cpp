#include <iostream>

using namespace std;

//Hàm kiểm tra số nguyên tố
bool nt(int n){
    if(n == 1 || n == 0) return false;
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
//Hàm tổng chữ số nguyên tố và các chữ số là số nguyên tố, check luôn 2 yêu cầu này trong cùng 1 hàm vì nó đều tách từng chữ số
bool csnt(int n){
    int sum = 0;
    while(n > 0){
        int tmp = n % 10;
        if(nt(tmp)){
            sum += tmp;
            n /= 10;
        }
        else return false;
        
    }
    if(nt(sum)){
        return true;
    }
    return false;
}

int main(){
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}
