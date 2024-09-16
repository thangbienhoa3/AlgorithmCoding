#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> v;

int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }   
    int count = 0;
    sort(v.begin(),v.end());
    for(int i = v.size() - 1;i >= 1;i--){
        int l = 0, r = i - 1;
        while (l < r) {
            if (v[l] + v[r] > v[i]){
                count += r - l;
                r--;
            }
            else l++;
        }
    }
    cout << count << endl;
}