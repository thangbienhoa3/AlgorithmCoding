#include <iostream>
#include <vector>
using namespace std;

int n;
int check_prime(int v){
    for(int i = 2; i*i <= v;i++){
        if(v % i == 0){
            return 0;
        }
    }
    return 1;
}
vector<int> prime_list(vector<int> v){
    vector <int> res;
    for(int i = 0;i < n;i++){
        if(check_prime(v[i]) && v[i] != 0 && v[i] != 1){
            res.push_back(v[i]);
        }
    }
    return res;
}
void nhap(vector <int> &v){
    for(int i = 0;i < n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
}
void in(vector <int> res){
    for(int i = 0;i < res.size();i++){
        cout << res[i] << " ";
    }
    cout << endl;
}
int main(){
    cin >> n;
    vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
    in(res);
}
