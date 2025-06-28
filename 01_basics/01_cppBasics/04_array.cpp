#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;

    cout << arr[3];

    // 2D
    // row, column
    int arr2 [3][5];

    arr2 [1][3] = 4;
    cout << arr2 [1][3];
    cout << arr2 [1][2]; // gives garbage value

     

    return 0;
}