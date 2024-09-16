#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector < vector <string> > v;
    int n,q; cin >> n >> q;
    for(int i = 0;i < n;i++){
        int m; cin >> m;
        vector <string> tmp;
        for(int j = 0;j < m;j++){
            string s; cin >> s;
            tmp.push_back(s);
        }
        v.push_back(tmp);
    }
    for(int i = 0;i < q;i++){
        int x,y; cin >> x >> y;
        cout << v[x-1][y-1] << endl;
    }
}