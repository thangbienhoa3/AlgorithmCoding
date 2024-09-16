#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) v.push_back(tmp);
    cout << v.size() << endl;
}