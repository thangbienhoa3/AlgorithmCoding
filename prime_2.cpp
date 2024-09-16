#include <iostream>
#include <cstring>
using namespace std;
const long long int N = 1e7 + 1;
long long int a[N];
void prime(){
    for(int i = 2;i*i <= N;i++){
        if(a[i] == 0){
            for(int j = i*i;j <= N;j+=i){
                a[j] = 1;
            }
        }
    }
}
int main(){
    int t;cin >> t;
    cin.ignore();
    prime();
    while(t--){
        int n; cin >> n;
        if(!a[n]){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}