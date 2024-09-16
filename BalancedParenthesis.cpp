#include <iostream>

using namespace std;
string open,close;
vector <string> v;
char res[100];
int n;
void input(){
    open = "([{";
    close = ")]}";
}
void Try(int i,string curr){
    for(int j = 0;j < 3;j++){
        if(i == n) {
            v.push_back(curr);
            return;
        }
        string s1 = "",s2 = "",s3 = "";
        s1.push_back(open[i]),s1.push_back(close[i]),s1 += curr;
        Try(i+1,s1);
        s2.push_back(open[i]),s2 += curr,s2.push_back(close[i]);
        Try(i+1,s2);
        s3 += curr,s3.push_back(open[i]),s3.push_back(close[i]);
        Try(i+1,s3);
    }
}
int main(){
}