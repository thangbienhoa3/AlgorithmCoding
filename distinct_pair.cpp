#include <iostream>
#include <utility>
#include <set>

using namespace std;

int main(){
    set < pair <int,int> > se;
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        pair <int,int> tmp = make_pair(x,y);
        se.insert(tmp);
    }
    cout << se.size() << endl;
}