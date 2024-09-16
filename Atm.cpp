#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,k,a[100],sum = 0,target = 0;

int main(){
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int msk = 0;msk < (1 << n);msk++){
        int sumA = 0;
        for(int i = 0;i < n;i++){
            if(msk & (1 << i)){
                sumA += a[i];
            }
        }
        if(sumA == k){
            
        }
    }    
    cout << "0" << endl;
    
}
