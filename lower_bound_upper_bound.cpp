#include <iostream>

using namespace std;
int a[100000];
int x;
// vị trí đầu tiên lớn hơn hoặc bằng
int fipo1(int n,int l,int r){
    int fipo = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] >= x){
            fipo = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
    }
    return fipo;
}
int fipo2(int n,int l,int r){
    int fipo = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == x){
            l = m + 1;
        }
        else if(a[m] > x){
            fipo = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
    }
    return fipo;
}
int fipo3(int n,int l,int r){
    int fipo = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == x){
            fipo = m;
            r = m - 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
    }
    return fipo;
}
int fipo4(int n,int l,int r){
    int fipo = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == x){
            fipo = m;
            l = m + 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
    }
    return fipo;
}
int main(){
    int n; cin >> n >> x;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    cout << fipo1(n,0,n-1) << endl;
    cout << fipo2(n,0,n-1) << endl;
    cout << fipo3(n,0,n-1) << endl;
    cout << fipo4(n,0,n-1) << endl;
    if(fipo3(n,0,n-1) == -1 && fipo4(n,0,n-1) == -1){
        cout << '0' << endl;
    }
    else cout << fipo4(n,0,n-1) - fipo3(n,0,n-1) + 1 << endl;
}