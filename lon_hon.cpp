#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[1000000],b[1000000];
    int n,m; cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    sort(b,b+m  );
    for(int i = 0;i < n;i++){
        int *pos = upper_bound(b,b+m,a[i]);
        int index = pos - b;
        cout << m - index << ' ';
    }
    cout << endl;

}