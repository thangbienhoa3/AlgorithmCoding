#include <iostream>
#include <vector>

using namespace std;
vector <int> v;
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int m; cin >> m;
    while(m--){
        int t; cin >> t;
        if(t == 1){
            int a,i; cin >> i >> a;
            v.insert(v.begin() + i,a);
        }
        else if(t == 2){
            int i; cin >> i;
            v.erase(v.begin() + i);
        }
    }
    if(v.empty()){
        cout << "EMPTY" << endl;
    }
    else{
        for(int i = 0;i < v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}