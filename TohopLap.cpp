#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int n,k,x[100];
string s;
void print(){
    for(int i = 1;i <= k;i++){
        cout << s[x[i]];
    }
    cout << endl;
}
void Try(int i,int start){
    for(int j = start;j <= n;j++){
        x[i] = j;
        if(i < k) Try(i+1,j);
        else print();
    }
}
int main(){
    cin >> n >> k >> s;
    sort(s.begin(),s.end());
    s = "0" + s;
    Try(1,1);
}