#include <iostream>

using namespace std;
typedef long long int ll;
int x[100],n;

void Try(int i){
    for(int j = 0;j <= 1;j++){
        x[i] = j;
        if(i == n){
            for(int k = 1;k <= n;k++){
                cout << x[k] << ' ';
            }
            cout << endl;
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n;
    Try(1);
}