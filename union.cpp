#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector <int> v1,v2;
    set <int> se;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    for(int i = 0;i < m;i++){
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    for(auto it = se.rbegin(); it != se.rend();it++){
        cout << *it << ' ';
    }
    cout << endl;


}