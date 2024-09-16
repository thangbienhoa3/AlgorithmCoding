#include <iostream>
#include <math.h>

using namespace std;
int main(){
    for(int j = 39;j >= -39;j--){
        for(int i = -35; i <= 35;i++){
            if( ((abs(j-25) < 14 && abs(i) < 6) || (abs(j - 25) == 13 && abs(i) < 10)) || pow(abs(i),3) ){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}