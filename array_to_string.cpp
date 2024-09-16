#include <iostream>
#include <string>

using namespace std;

string array_to_string(char a[], int n){
    string tmp = "";
    for(int i = 0;i < n;i++){
        tmp.push_back(a[i]);
    }   
    return tmp;
}

int main(){
    int n;
    char a[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
}
