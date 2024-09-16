#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
using namespace std;

int main(){
    vector < pair <int,int> > v;
    vector <double> res;
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        pair <int,int> tmp = make_pair(x,y);
        v.push_back(tmp);
    }
    for(int i = 0;i < n;i++){
        double tmp = sqrt(pow(v[i].first,2) + pow(v[i].second,2));
        res.push_back(tmp);
    }
    for(auto it : res){
        printf("%.2lf ",it);
    }
    cout << endl;
}