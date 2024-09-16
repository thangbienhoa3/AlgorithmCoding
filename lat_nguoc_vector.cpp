#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int l,r; cin >> l >> r;
    vector <int> res1 = v;
    reverse(res1.begin(),res1.end());
    for(int i = 0;i < res1.size();i++){
        cout << res1[i] << " ";
    }
    cout << endl;
    reverse(res1.begin() + l,res1.begin() + r + 1);
    for(int i = 0;i < res1.size();i++){
        cout << res1[i] << " ";
    }
    cout << endl;
    
}