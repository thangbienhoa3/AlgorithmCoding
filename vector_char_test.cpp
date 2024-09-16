#include <iostream>
#include <vector>

using namespace std;


int main(){
    int tmp = 1;
    vector <int> v;
    for(int i = 0;i < 100000 && tmp;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
}