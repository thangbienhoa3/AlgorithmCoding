#include <iostream>

using namespace std;


int gcdExtended(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0; 
        *y = 1; 
        return b; 
    } 
 
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);  
    *x = y1 - (b/a) * x1; 
    *y = x1; 
    cout << gcd << endl;
    return gcd; 
} 
int main(){
    gcdExtended()
}