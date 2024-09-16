#include <iostream>
#include <set>

using namespace std;

multiset <int> se;
int a[100000];
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int q; cin >> q;
    while(q--){
        int tt,x; cin >> tt >> x;
        if(tt == 1){
            se.insert(x);
        }
        else if(tt == 2){
            multiset <int>:: iterator it = se.find(x);
            if(it != se.end()){
                se.erase(it);
            }
        }
        else if(tt == 3){
            if(se.find(x) != se.end()){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
}