#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,a[100],sum = 0,target = 0;

int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int msk = 0;msk < (1 << n);msk++){
        int sumA = 0;
        int sumB = 0;
        for(int i = 0;i < n;i++){
            if(msk & (1 << i)){
                sumA += a[i];
            }
            else{
                sumB += a[i];
            }
        }
        if(sumA == sumB){
            cout << "1" << endl;
            return 0;
        }
    }    
    cout << "0" << endl;
    
}
