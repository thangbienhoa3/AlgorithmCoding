#include <iostream>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int b[n],c[m];
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    for(int i = 0;i < m;i++){
        cin >> c[i];
    }
    int i = 0,j = 0;
    while(i < n && j < m){
        if(b[i] < c[j]){
            cout << "b" << i+1 << ' ';
            i++;
        }
        else if(c[j] < b[i]){
            cout << "c" << j+1 << ' ';
            j++;
        }
        else if(c[j] == b[i]){
            cout << "b" << i+1 << ' ';
            i++;
        }
    }
    while(i < n){
        cout << "b" << i+1 << ' ';
        i++;
    }
    while(j < m){
        cout << "c" << j+1 << ' ';
        j++;
    }

}