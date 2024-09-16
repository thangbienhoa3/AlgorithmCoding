#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m,cnt = 0; cin >> n >> m;
    int b[n],c[m];
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    for(int i = 0;i < m;i++){
        cin >> c[i];
    }
    sort(b,b+n);
    sort(c,c+m);
    int i = 0,j = 0;
    while(i < n && j < m){
        if(b[i] <= c[j]){
            i++;
        }
        else if(c[j] < b[i]){
            cnt++;
            j++;
            i++;
        }
    }
    cout << cnt << endl;

}