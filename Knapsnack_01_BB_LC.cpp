#include <iostream>
#include <climits>
using namespace std;



int n,m,cost,bound = INT_MAX,pro[100],weight[100],res = INT_MAX;
int check_weight;
int a[100] = {0};
struct Node
{
    int upper;
    int C;
};
Node *u;
int find_bound_cost()
{
    int tmp_bound = 0;
    int tmp_cost = 0;
    int tmp_weight = 0;
    for(int i = 1;i <= n;i++)
    {
        if(a[i] && tmp_weight + weight[i] > m)
        {
            tmp_bound += (pro[i] / weight[i]) * (m - tmp_weight);
            break;
        }
        if(a[i] && tmp_weight + weight[i] <= m)
        {
            tmp_weight += weight[i];
            tmp_bound += pro[i];
            tmp_cost += pro[i];
        }
        
    }
    u->C = tmp_cost;    
    
    return tmp_bound;
}
void solve(int i)
{
    if(a[i]) check_weight += a[i];
    u->upper = find_bound_cost();
    if(u->upper < bound) bound = u->upper;
    if(i == n + 1 || u->C < bound || check_weight > m)
    {
        check_weight -= a[i];
        return;
    }
    else if(u->C < res) res = u->C;
    solve(i+1);
    a[i] = 0;
    solve(i+1);
    a[i] = 1;
    
}
int main()
{
    u = new Node;
    cin >> n >> m;
    for(int i = 1; i <= n;i++)
    {
        cin >> weight[i];
    }
    for(int i = 1; i <= n;i++)
    {
        cin >> pro[i];
        pro[i] = pro[i] * -1;
    }
    for(int i = 1;i <= n;i++) a[i] = 1;
    int tmp_weight = 0;
    for(int i = 1;i <= n;i++)
    {
        if(tmp_weight + weight[i] >= m)
        {
            cost = cost + (pro[i] / weight[i]) * (m - cost);
            break;
        }
        else
        {
            tmp_weight += weight[i];
            cost = cost + pro[i];
            bound = bound + pro[i];
        }
    }
    solve(1);
    cout << res*-1 << endl;
}