#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector <string> v;
string res;
int my_cmp(const string v1,const string v2){
    return v1 + v2 > v2 + v1;
}
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s1; cin >> s1;
        v.push_back(s1);
    }
    sort(v.begin(),v.end(),my_cmp);
    for(int i = 0;i < v.size();i++){
        cout << v[i];
    }   
    cout << endl;
}
