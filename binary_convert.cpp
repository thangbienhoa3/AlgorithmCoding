#include <iostream>
#include <vector>
using namespace std;

vector<char> convert_number(long long n){
    vector <char> v;
    int cnt = 1;
    while(cnt <= 64){
        long long tmp = n % 2;
        if(tmp == 1){
            v.push_back('1');
        }
        else if(tmp == 0){
            v.push_back('0');
        }
        n = n / 2;
        cnt++;
    }
    reverse(v.begin(),v.end());
    return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
