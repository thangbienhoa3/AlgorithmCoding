#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lld;
int main(){
    int n,k; cin >> n;
    vector <int> a,b;
    for(int i = 0;i < n;i++){
        int num; cin >> num;
        if(num == 0){
            a.push_back(num);
        }
        else cout << num << ' ';
    }
    for(int i = 0; i < a.size();i++){
        cout << a[i] << ' ';
    }
    

}