#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string s; cin >> s;
    int even_pos_sum = 0,odd_pos_sum = 0;
    for(int i = 0;i < s.length();i++){
        char tmp = s[i] - '0';
        if(i % 2 == 0){
            even_pos_sum += tmp;
        }
        else odd_pos_sum += tmp;
    }
    if(abs(even_pos_sum - odd_pos_sum) % 11 == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}