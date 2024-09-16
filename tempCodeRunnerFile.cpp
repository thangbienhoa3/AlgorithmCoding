#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int n,k,a[20][20],x[100],cnt;
char s[100];
set <string> res;
void print(){
    string tmp = "";
    for(int i = 1;i <= k;i++){
        tmp.push_back(s[x[i]]);
    }
    sort(tmp.begin(),tmp.end());
    if(res.find(tmp) == res.end()){
        res.insert(tmp);
        cout << tmp << endl;
    }   
}
void Try(int i){
    for(int j = 1;j <= n;j++){
        if(i == k + 1){
            print();
            return;
        }
        if(!a[j][i]){
            x[i] = j;
            Try(i+1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        cin >> s[i];
    }
    Try(1);
}