#include <iostream>


using namespace std;

int n,m,a[100];
void print(){
    for(int i = 1;i <= n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}
int UCV(int j,int k){
    for(int i = 1;i <= k - 1;i++){
        if(a[i] == j) return 0;
    }
    return 1;
}
void Permu(int k){
    for(int i = 1;i <= n;i++){
        if(UCV(i,k)){
            a[k] = i;
            if(k == n) print();
            else Permu(k+1);
        }
    }
}
int main(){
    cin >> n;
    Permu(1);
}