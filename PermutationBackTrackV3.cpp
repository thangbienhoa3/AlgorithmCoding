#include <iostream>
#include <set>
#include <vector>
using namespace std;

int n,m,a[100],b[100],res[100];
set < vector <int> > se;
void GhiNhan(){
    for(int i = 1;i <= n;i++){
        cout << res[i] << ' ';
    }
    cout << endl;
}
void Permu(int k){
    if(k == n + 1) GhiNhan();
    else{
        for(int i = 1;i <= n;i++){
            if(!b[i]){
                res[k] = a[i];
                b[i] = 1;
                Permu(k+1);
                b[i] = 0;
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    Permu(1);
    
}