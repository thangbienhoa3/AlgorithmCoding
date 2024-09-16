#include <iostream>

using namespace std;
int a[100],n,m;

int isEnd(){
    for(int i = 1;i <= m;i++){
        if(a[i] != n - m + i){
            return 0;
        }
    }
    return 1;
}
void printsol(){
    for(int i = 1;i <= m;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}
void khoitao(){
    for(int i = 1;i <= m;i++){
        a[i] = i;
    }
}
void Try(int k){
    while(a[k] == n - m + k){
        k--;
    }
    a[k]++;
    for(int i = k + 1;i <= m;i++){
        a[i] = a[k] + i - k;
    }  
}
void generate(){
    int stop = 0;
    while(!stop){
        printsol();
        if(!isEnd()) Try(m);
        else stop = 1;
    }
}

int main(){
    cin >> n >> m;
    khoitao();
    generate();
}