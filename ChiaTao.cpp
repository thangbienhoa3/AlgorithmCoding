#include <iostream>

using namespace std;
int a[100],n,m;

int isEnd(){
    for(int i = 1;i <= n;i++){
        if(!a[i]){
            return 0;
        }
    }
    return 1;
}
void printsol(){
    for(int i = 1;i <= n;i++){
        if(a[i]) cout << "A";
        else cout << "B";
    }
    cout << endl;
}
void khoitao(){
    for(int i = 1;i <= n;i++){
        a[i] = 0;
    }
}
void Try(){
    int k = n;
    while(a[k]){
        a[k] = 0;
        k--;
    }
    a[k] = 1;
}
void generate(){
    int stop = 0;
    while(!stop){
        for(int i = 1;i <= n;i++){
            if(a[i]){
                
            }
        }
        if(!isEnd()) Try();
        else stop = 1;
    }
}

int main(){
    cin >> n;
    khoitao();
    generate();
}