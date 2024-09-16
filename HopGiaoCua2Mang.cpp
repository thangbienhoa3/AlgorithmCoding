#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
typedef long long int lld;
int main(){

    lld n,m;
    cin >> n >> m;
    set <int> se1,se2;
    vector <int> a,b;
    for(int i = 0;i < n;i++){
        int num; cin >> num;
        if(se1.find(num) == se1.end()){
            a.push_back(num);
            se1.insert(num);
        }
    }
    for(int i = 0;i < m;i++){
        int num; cin >> num;
        if(se2.find(num) == se2.end()){
            b.push_back(num);
            se2.insert(num);
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0,j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] == b[j]){
            cout << a[i] << ' ';
            i++,j++;
        }
        if(a[i] < b[j]){
            i++;
        }
        if(a[i] > b[j]){
            j++;
        }
    }
    cout << endl;
    i = 0,j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] == b[j]){
            cout << a[i] << ' ';
            i++,j++;
        }
        else if(a[i] < b[j]){
            cout << a[i] << ' ';
            i++;
        }
        else if(a[i] > b[j]){
            cout << b[j] << ' ';
            j++;
        }
    }
    while(i < a.size()){
        cout << a[i] << ' ';
        i++;
    }
    while(j < b.size()){
        cout << b[j] << ' ';
        j++;
    }
}