#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
typedef long long int lld;
set <lld> se;
void solve(int num){
    while(num > 0){
        se.insert(num % 10);
        num /= 10;
    }
}
int main(){
    lld n,m;
    cin >> n;
    for(int i = 0;i < n;i++){
        int num; cin >> num;
        solve(num);
    }
    for(set <lld>::iterator it = se.begin();it != se.end();it++){
        cout << *it << ' ';
    }
    
    
}