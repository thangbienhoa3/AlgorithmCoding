#include <iostream>

using namespace std;
typedef long long int lld;
const lld N = 1e9;
lld c[100][100],visted[100],x[100],xopt[100];
lld n,g,cmin = N,currCost = 0,optCost = N;
void updateSol(){
    if(currCost + c[x[n]][1] < optCost){
        optCost = currCost +  c[x[n]][1];
        for(int i = 1;i <= n;i++){
            xopt[i] = x[i];
        }
    }
}
void Try(int k){
    for(int v = 2;v <= n;v++){
        if(!visted[v]){
            x[k] = v;
            visted[v] = 1;
            currCost += c[x[k-1]][v];
            if(k == n) updateSol();
            else{
                g = currCost + (n - k + 1)*cmin;
                cout << g << ' ' << optCost << endl;
                if(g < optCost){
                    Try(k+1);
                }
            }
            visted[v] = 0;
            currCost -= c[x[k-1]][v];
        }
        
    }
}
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> c[i][j];
            if(i != j){
                cmin = min(cmin,c[i][j]);
            }
        }
    }
    x[1] = 1,visted[1] = 1;
    Try(2);
    cout << optCost << endl;
    for(int i = 1;i <= n;i++){
            cout << xopt[i] << ' ';
    }
    cout << "1" << endl;
}