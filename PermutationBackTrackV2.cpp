#include <iostream>
#include <set>
#include <vector>
using namespace std;

int n,m,a[100],res[100];
set < vector <int> > se;
void GhiNhan(){
    for(int i = 1;i <= n;i++){
        cout << res[i] << ' ';
    }
    cout << endl;
}
int UCV(int j,int k){
    for(int i = 1;i <= k - 1;i++){
        if(res[i] == j) return 0;
    }
    return 1;
}
void Permu(int k){
    if(k == n + 1) GhiNhan();
    else{
        for(int i = 1;i <= n;i++){
            if(UCV(a[i],k)){
                res[k] = a[i];
                Permu(k+1);
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    Permu(1);
    
}