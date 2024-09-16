#include <iostream>

using namespace std;
int a[21],b[21],n,m,cnt1 = 1,cnt2 = 1,stop1 = 0;
void khoitao(){
    for(int i = 1;i <= m;i++){
        a[i] = i;
    }
}
void nextsub(){
    int k = m;
    while(a[k] == n - m + k){
        k--;
    }
    a[k]++;
    for(int i = k + 1;i <= m;i++){
        a[i] = a[k] + i - k;
    }
}
void print(){
    cout << cnt1 - cnt2 + 1 << endl;
}
int isend(){
    for(int i = 1;i <= m;i++){
        if(a[i] != n - m + i){
            return 0;
        }
    }
    return 1;
}
int check(){
    for(int i = 1;i <= m;i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    stop1 = 1;
    return 1;
}
void sinh(){
    int stop = 0;
    while(!stop){
        if(!isend()){
            cnt1++;
            check();
            if(!stop1) cnt2++;
            nextsub();
        }
        else stop = 1;
    }
    print();
}
int main(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        cin >> b[i];
    }
    khoitao();
    sinh();
}