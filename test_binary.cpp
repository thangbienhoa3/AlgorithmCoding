#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 10;
    vector <int> res;
    while(n != 0){
        int tmp = n%2;
        res.push_back(tmp);
        n = n / 2;
    }
    cout << res[1];
}