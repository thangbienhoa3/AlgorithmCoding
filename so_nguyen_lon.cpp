#include <iostream>

using namespace std;
 
int main(){
    string m,n;
    cin >> n >> m;
    if(n.length() > m.length()){
        cout << "28tech" << endl;
    }
    else if(m.length() > n.length()){
        cout << "29tech" << endl;
    }
    else if(m.length() == n.length()){
        if(n > m){
            cout << "28tech" << endl;
        }
        else if(m > n){
            cout << "29tech" << endl;
        }
        else cout << "30tech" << endl;
    }
}