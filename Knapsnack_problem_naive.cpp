#include <iostream>
#include <climits>
using namespace std;

const int n = 20;

int x[n],w[n],v[n],b,bk,fk = 0,fopt = INT_MIN;

void update_sol(){
    if(fopt < fk){
        fopt = fk;
    }
}
void TRY(int k){
    int tk = bk >= w[k] ? 1 : 0;
    for(int i = 0;i <= tk;i++){
        x[k] = i;
        bk -= w[k] * x[k];
        fk += v[k] * x[k];
        if(k == n) update_sol();
        else{
            TRY(k+1); 
        }
        bk += w[k] * x[k];
        fk -= v[k] * x[k];
    }
}
int main(){
    int num; cin >> num >> b;
    for(int i = 1;i <= num;i++){
        cin >> w[i];
    }
    for(int i = 1;i <= num;i++){
        cin >> v[i];
    }
    TRY(1);
    cout << fopt << endl;
    
}