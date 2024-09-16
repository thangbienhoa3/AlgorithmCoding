#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int main(){
    cin >> n;
    vector <char> v;
    map <char,int> mp1;
    for(int i = 0;i < n;i++){
        char tmp; cin >> tmp;
        mp1[tmp]++;
    }
    map <char,int>:: iterator it1 = mp1.begin();
    map <char,int>:: reverse_iterator it2 = mp1.rbegin();
    cout << it1->first << " " << it1->second << endl << endl;
    cout << it2->first << " " << it2->second << endl << endl;
    for(map <char,int>:: iterator it  = mp1.begin();it != mp1.end();it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    map <char,int>:: reverse_iterator it = mp1.rbegin();
    for(it = mp1.rbegin(); it != mp1.rend();it++){
        cout << it->first << " " << it->second << endl;
    }
}