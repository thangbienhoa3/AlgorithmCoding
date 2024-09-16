#include <iostream>
using namespace std;

const int N = 1e4 + 1;
int a[N];
int n,m;
int is_end(){
    for(int i = 1;i <= m;i++){
        if(a[i] != n - m + 1){
            return 0;
        }
    }
    return 1;
}
int main(){
     cin >> n >> m;
    for(int i = 1;i <= m;i++){
        cin >> a[i];
    }
    if(is_end()){
        for(int i = 1; i <= m;i++){
            cout << i << ' ';
        }
    }
    else{
        int k = m;
        while (a[k] == n - m + k) k--;
        a[k]++;
        for (int i = k + 1; i <= m; i++) 
            a[i] = a[k] + i  - k;

        for(int i = 1;i <= m;i++){
            cout << a[i] << ' ';
        }
    }
}
