#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector <int> v;
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp;cin >> tmp;
        v.push_back(tmp);
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << accumulate(v.begin(), v.end(), 0) << endl;
}