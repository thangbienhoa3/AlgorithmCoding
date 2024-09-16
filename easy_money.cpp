#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s,res = ""; cin >> s;
    string max_string = "";
    for(int i = 0;i < s.length();i++){
        int index = i;
        for(int j = i + 1; j < s.length();j++){
            string tmp = s;
            if(tmp[j] > tmp[i]){
                swap(tmp[i],tmp[j]);
            }
            if(tmp > max_string) max_string = tmp;
        }
        
        
    }
    cout << max_string << endl;
}