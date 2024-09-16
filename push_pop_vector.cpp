#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    vector <int> v;
    while(t--){
        int action;
        int num;
        cin >> action;
        if(action == 1){
            cin >> num;
            v.push_back(num);
        }
        else if(action == 2 && !v.empty()){
            v.pop_back();
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