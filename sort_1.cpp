#include <iostream>
#include <algorithm>
using namespace std;

char c[1000000];

int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> c[i];
    }
    sort(c,c+n);
    for(int i = 0;i < n;i++){
        cout << c[i] << ' ';
    }
    cout << endl;
    sort(c,c+n,greater<char>());
    for(int i = 0;i < n;i++){
        cout << c[i] << ' ';
    }
    cout << endl;

}