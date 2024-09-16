#include <iostream>

using namespace std;
int a[10000],pre_sum[10000];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        pre_sum[i] = a[i] + pre_sum[i-1];
    }
    for(int i = 1;i <= n;i++){
        
    }
}