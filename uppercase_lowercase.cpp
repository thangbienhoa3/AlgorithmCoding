#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <sstream>
using namespace std;
int main(){
    string s;
    string upper_case_str = "", lower_case_str = "";
    getline(cin,s);
    for(int i = 0; i < s.length();i++){
        upper_case_str += toupper(s[i]);
        lower_case_str += tolower(s[i]);
    }
    cout << upper_case_str << endl << lower_case_str << endl;
}