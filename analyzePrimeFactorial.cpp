#include <iostream>
#include <vector>
#include <utility>
using namespace std;
typedef long long int lld;
vector < pair <lld,lld> > v;
int main(){
    lld n; cin >> n;
    lld cnt = 0;
    while(n % 2 == 0){
        n /= 2;
        cnt++;
    }
    if(cnt){
       pair <lld,lld> tmp = make_pair(2,cnt);
       v.push_back(tmp);
    }
    for(lld i = 3;i*i <= n;i+= 2){
        cnt = 0;
        while(n % i == 0){
            n /= i;
            cnt++;
        }
        if(cnt){
            pair <lld,lld> tmp = make_pair(i,cnt);
            v.push_back(tmp);
        }
    }
    if(n > 2){
        pair <lld,lld> tmp = make_pair(n,1);
        v.push_back(tmp);
    }
    for(int i = 0;i < v.size();i++){
        if(i == v.size() - 1){
            cout << v[i].first << "^" << v[i].second << endl;
        }
        else cout << v[i].first << "^" << v[i].second << " * ";
    }
}