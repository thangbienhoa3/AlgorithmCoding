#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
    set <int> se1,se2;
    int n,m; cin >> n >> m;
    for(int i = 0;i < n;i++){
        int tmp;cin >> tmp;
        se1.insert(tmp);
    }
    for(int i = 0;i < m;i++){
        int tmp;cin >> tmp;
        se2.insert(tmp);
    }
    for(auto it : se1){
        if(se2.find(it) == se2.end()){
            cout << it << ' ';
        }
    }
    cout << endl;
}