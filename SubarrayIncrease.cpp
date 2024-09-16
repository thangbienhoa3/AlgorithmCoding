#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,a[100],visited[100];
vector <int> v;
vector <string> s;
void ghiNhan(){
    if(v.size() >= 2){
        string tmp = "";
        for(int i = 0;i < v.size();i++){
            tmp += to_string(v[i]) + " ";
        }
        s.push_back(tmp);
    }
}
void Try(int i){
    for(int j = i + 1;j <= n;j++){
        if(a[j] > a[i]){
            v.push_back(a[j]);
            ghiNhan();
            Try(j);
            v.pop_back();
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= n - 1;i++){
        v.push_back(a[i]);
        Try(i);
        v.clear();
    }
    sort(s.begin(),s.end());
    for(int i = 0;i < s.size();i++){
        cout << s[i] << endl;
    }
    
}
