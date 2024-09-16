#include <iostream>

using namespace std;

const int n = 1e6;
int a[n] = {0};
int main(){
    string s; cin >> s;
    int cnt_1 = 0,cnt_0 = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] - '0' == 1){
            a[i] = 1 + cnt_1;
            cnt_1++;
            if(cnt_0 > 0) cnt_0--;
        }
        else if(s[i] - '0' == 0){
            a[i] = 1 + cnt_0;
            cnt_0++;
            if(cnt_1 > 0) cnt_1--;

        }
    }
    for(int i = 0;i < s.length();i++){
        cout << a[i] << ' '; 
    }
    cout << endl;

}