#include <iostream>
#include <map>
#include <algorithm>
#include <set>

using namespace std;
set <int> se;
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    set <int>:: iterator it_max = se.end();
    set <int>:: iterator it_min = se.begin();
    cout << se.size() << endl;
    cout << *(--it_max) << ' ' << *it_min << endl;
    cout << *(--it_max) << ' ' << *(++it_min) << endl;

}