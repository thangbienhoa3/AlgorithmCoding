#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,a[100];
vector < vector <int> >res;
int main(){
    cin >> n;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < (1 << n);i++){
        int sum = 0;
        vector <int> v;
        for(int j = 0;j < n;j++){
            if(i & (1 << j)){
                sum += a[j];
                v.push_back(a[j]);
            }
        }
        if(sum % 2){
            cnt++;
            res.push_back(v);
        }
    }
    sort(res.begin(),res.end());
    if(cnt == 0){
        cout << "NOT FOUND" << endl;
    }
    else
    for(int i = 0;i < res.size();i++){
        for(int j = 0;j < res[i].size();j++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
}