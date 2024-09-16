#include <iostream>

using namespace std;
int presum[100][100] = {0};
int main(){
    int a[100][100];// chỉ số bắt đầu nên lấy là 1 cho đồng nhất với công thức 
    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= 5;j++){
            cin >> a[i][j];
        }
    }
    //1	2 3	4 5
    //3	4 5	6 7
    //5	6 7	8 9
    //7	8 9 10 11
    //9	10 11 12 13
    for(int i = 1;i <= 5;i++){
        for(int j =1;j <= 5;j++){
            presum[i][j] = presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1] + a[i][j];
        }
    }
    int a1, A, b, B;
    cin >> a1 >> A >> b >> B;
    cout << presum[A][B] - presum[a1 - 1][B] - presum[A][b - 1] + presum[a1 - 1][b - 1] << endl;;
}