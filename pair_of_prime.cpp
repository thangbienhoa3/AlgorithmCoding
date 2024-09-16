#include <iostream>
using namespace std;

int ucln(int a,int b){
    if(a == 0) return b;
    return ucln(b%a,a);
}
int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        for(int j = i + 1; j <= b; j++){
            if(ucln(i, j) == 1){
                cout << "(" << i << "," << j << ")\n";
            }
        }
    }
}
