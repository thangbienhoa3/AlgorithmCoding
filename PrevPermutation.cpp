#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,stop = 0,cnt = 0; cin >> n;
    int a[n+5],b[n+5];
    for(int i = 1;i <= n;i++){
        a[i] = i;
    }
    for(int i = 1;i <= n;i++){
        cin >> b[i];
    }
    do{
        cnt++;
        for(int i = 1;i <= n;i++){
            if(b[i] != a[i]){
                stop = 0;
                break;
            }
            else stop = 1;
        }
    }while(next_permutation(a + 1,a + n + 1) && !stop);
    cout << cnt << endl;
}