#include <iostream>
using namespace std;

typedef long long int ll;

//X[1] : hang 1 dat o cot nao
int X[100], cot[100], xuoi[100], nguoc[100], n, cnt = 0;

void print(){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(X[i] == j){
                cout << "Q";
            }
            else cout << ".";
        }
        cout << endl;
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0){
            X[i] = j;
            cot[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if(i == n){
                print();
            }
            else
                Try(i + 1);
            cot[j] = 0;
            xuoi[i - j + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
}


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n;
	Try(1);
}