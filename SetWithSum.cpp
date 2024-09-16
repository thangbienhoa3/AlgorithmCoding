#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n,s,a[100],mark[100],cnt = 0;
int currSum = 0;
vector <int> v;
vector < vector <int> > res;
void Ghinhan(){
    res.push_back(v);
}
void Try(int i){
    for(int j = i;j <= n;j++){
        currSum += a[j];
        v.push_back(a[j]);
        if(currSum < s) Try(j);
        if(currSum == s) {
            cnt++;
            Ghinhan();
        }
        currSum -= a[j];
        v.pop_back();
    }
}
int main(){
    cin >> n >> s;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    Try(1);
    if(cnt == 0){
        cout << "-1" << endl;
        return 0;
    }
    cout << cnt << endl;
    for(int i = 0;i < res.size();i++){
        cout << '{';
        for(int j = 0;j < res[i].size();j++){
            if(j == res[i].size()-1) cout << res[i][j] << '}' << endl;
            else cout << res[i][j] << ' ';
        }
    }
}