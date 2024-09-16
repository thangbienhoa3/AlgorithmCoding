#include <iostream>
#include <vector>

using namespace std;
vector <int> v;
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int l,r; cin >> l >> r;
    for(int i = l; i <= r;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(int j = r;j >= l;j--){
        cout << v[j] << " ";
    }
    cout << endl;
}