#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,a[25],stop = 0;
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) stop = 1;
    else a[i] = 1;
}
int main() {
    cin >> n;
    vector <vector <int> > v;
    while(!stop){
        vector <int> tmp;
        for(int i = 1;i <= n;i++){
            if(a[i]) tmp.push_back(i);
        }
        v.push_back(tmp);
        sinh();
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++){
        for(int j = 0;j < v[i].size();j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}
