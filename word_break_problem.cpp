#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

vector <string> v;
string word;
int n,dp[10000];
void solve(){
    vector <int> index;
    index.push_back(0);
    for(int i = 0;i <= word.length();i++){
        int index_size = index.size();
        int mark = 0;
        for(int j = index_size - 1;j >= 0;j--){
            string tmp = word.substr(index[j],i - index[j]);
            cout << index[j] << " " << i - index[j] << " " << tmp << endl;
            if(find(v.begin(),v.end(),tmp) != v.end()){
                mark = 1;
                break;
            }
        }
        if(mark == 1){
            dp[i] = 1;
            index.push_back(i);
        }
    }
}
int main()
{
    cin >> n >> word;
    cin.ignore();
    for(int i = 0;i < n;i++){
        string tmp;
        getline(cin,tmp);
        v.push_back(tmp);
    }
    solve();
}