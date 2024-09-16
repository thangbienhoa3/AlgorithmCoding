#include <iostream>
#include <vector>
using namespace std;
int n;

vector<int> unique_vector(vector<int> v){
    vector <int> res;
    for(int i = 0;i < v.size();i++){
        if(i == 0) res.push_back(v[i]);
        else if(res.back() != v[i]){
            res.push_back(v[i]);
        }
    }
    return res;
}

vector<int> nhap(){
    int tmp;
    vector <int> v;
    for(int i = 0;i < n;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    return v;
}   

void in(vector<int> v){
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    cin >> n;
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
}

   
    
