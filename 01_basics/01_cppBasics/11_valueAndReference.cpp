#include<bits/stdc++.h>
using namespace std;

// pass by value = copy sends
// void doSomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;    
//     return 0;
// }

// pass by reference = address sends (&)
// void doSomething(int &num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;    
//     return 0;
// }

// pass by reference of an array
// array always pass by reference by default
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside the function: " << arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "Value inside int main; " << arr[0] << endl;
    return 0;
}
