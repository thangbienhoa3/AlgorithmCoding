#include <iostream>
#include <set>
using namespace std;

set <char> se;

int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        char tmp; cin >> tmp;
        se.insert(tmp);
    }
    cout << se.size() << endl;
    for(auto it : se){
        cout << it << " ";
    }
    cout << endl;
    for(auto it = se.rbegin();it != se.rend();it++){
        cout << *it << " ";
    }
    cout << endl;
}