#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nhap(vector< vector<int> > &v, int n, int m){
    for(int i = 0;i < n;i++){
        vector <int> tmp;
        for(int j = 0;j < m;j++){
            int num; cin >> num;
            tmp.push_back(num);
        }
        v.push_back(tmp);
    }
}

void xuat(vector< vector<int> > v, int n, int m){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void lat(vector< vector<int> > &v, int n, int m){
    for(int i = 0;i < n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}

int main(){
    int n, m; cin >> n >> m;
    vector< vector<int> > v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
}
