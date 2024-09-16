#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;

int main()
{
    cin >> n;
    queue <int> qe;
    vector <int> v;
    qe.push(6);
    qe.push(8);
    while(n--)
    {   
        v.push_back(qe.front());
        qe.push(qe.front() * 10 + 6);
        qe.push(qe.front() * 10 + 8);
        qe.pop();
    }
    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
}