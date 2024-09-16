#include <iostream>
#include <vector>
#include <stack>
#include <utility>
long long int n;
using namespace std;

int main()
{
    cin >> n;
    vector <long long int> v;
    stack <long long int> stack;// khai báo stack chứa vị trí
    for(int i = 1;i <= n;i++)
    {
        long long int a; cin >> a;
        v.push_back(a);
    } 
    stack.push(0);
    for(int i = 0;i < n;i++)
    {
        while(!stack.empty() && v[stack.top()] >= v[i]) stack.pop();
        if(stack.empty()) cout << "0 ";
        else cout << stack.top() + 1 << " ";
        stack.push(i);
    }
}