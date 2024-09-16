#include <iostream>

using namespace std;
typedef long long int lld;
int check(lld n){
    if(n == 0 || n == 1) return 0;
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int CalSumNum(lld n){
    lld sumNum = 0;
    while(n > 0){
        sumNum += n % 10;
        n /= 10;
    }
    return sumNum;
}
int CalSumFac(lld n){
    lld sumFac = 0;
    while(n % 2 == 0){
        sumFac += 2;
        n /= 2;
    }
    for(int i = 3;i*i <= n;i++){
        while(n % i == 0){
            sumFac += CalSumNum(i);
            n /= i;
        }
    }
    if(n > 2) sumFac += CalSumNum(n);
    return sumFac;
}
int main(){
    lld n; cin >> n;
    if(!check(n)){
        lld sumNum = CalSumNum(n),sumFac = CalSumFac(n);
        if(sumNum == sumFac){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}