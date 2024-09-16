#include <iostream>
#include <vector>
using namespace std;
int a[1000000];
int main(){
    int n; cin >> n;
    vector <int> v;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int pos = n - 1, max_jump = 0;
    for(int i = n - 2;i >= 0;i--){
        max_jump = v[i] + i;
        if (max_jump >= pos) pos = i;
    }
    if(pos == 0){
        cout << "28tech" << endl;
    }
    else cout << "29tech" << endl;
}