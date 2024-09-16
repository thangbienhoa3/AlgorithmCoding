#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue <char> q1,q2;
int main(){
    string s1,s2 = "python";
    getline(cin,s1);
    for(int i = 0;i < s1.length();i++){
        q1.push(s1[i]);
    }
    for(int i = 0;i < s2.length();i++){
        q2.push(s2[i]);
    }
    while(!q1.empty() && !q2.empty()){
        if(q1.front() == q2.front()){
            q1.pop();
            q2.pop();
        }
        else q1.pop();
    }
    if(q2.empty()){
        cout << "YES" << endl;
    }
    else if(!q2.empty()){
        cout << "NO" << endl;  
    }
}