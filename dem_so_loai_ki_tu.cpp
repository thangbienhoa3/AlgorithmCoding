#include <vector>
#include <iostream>
#include <string>
using namespace std;
string s;
int cnt_char;
int cnt_num;
int cnt_sp;
int main(){
    getline(cin,s);
    for(int i = 0;i < s.size();i++){
        if(isalpha(s[i])){
            cnt_char++;
        }
        else if(isdigit(s[i])){
            cnt_num++;
        }
        else{
            cnt_sp++;
        }
    }
    cout << cnt_char << " " <<  cnt_num << " " << cnt_sp << endl;
}