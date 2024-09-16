#include <iostream>
#include <utility>
#include <vector>
using namespace std;
struct item{
    int w,val;
};
int n,curVal,bk,x[25],optx[25];
int optVal = INT_MIN;
item arr[25];
int cmp(item a,item b){
    return double(a.val)/a.w > double(b.val)/b.w;
}
void updateSol(){
    if(curVal > optVal){
        optVal = curVal;
    }
    for(int i = 1;i <= n;i++){
        optx[i] = x[i];
    }
}
void solve(int k){
    for(int i = bk/arr[k].w;i >= 0;i--){
        x[k] = i;
        curVal += x[k]*arr[k].val;
        bk -= x[k]*arr[k].w;
        if(k == n) updateSol();
        else{
            double g = curVal + double(arr[k+1].val)*bk/arr[k+1].w;
            if(g > optVal){
                solve(k+1);
            }
            curVal -= x[k]*arr[k].val;
            bk += x[k]*arr[k].w;
        }
    }
}
int main(){
    cin >> n >> bk;
    for(int i = 1;i <= n;i++){
        int val; cin >> val;
        arr[i].val = val;
    }
    for(int i = 1;i <= n;i++){
        int w; cin >> w;
        arr[i].w = w;
    }
    sort(arr+1,arr+n+1,cmp);
    solve(1);
    cout << optVal << endl;
}