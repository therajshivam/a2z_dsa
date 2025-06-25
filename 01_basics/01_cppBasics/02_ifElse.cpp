#include<iostream>
using namespace std;

// write a program that takes an input of age
// and prints if you are an adult or not

// int main(){
//     int age;
//     cin >> age;

//     if(age >= 18){
//         cout << "you are an adult";
//     } else {
//         cout << "you are not an adult";
//     }
//     return 0;
// }

// int main(){
//     int marks;
//     cout << "enter ur marks: ";
//     cin >> marks;

//     if (marks < 25){
//         cout << "F";
//     } else if (marks >= 25 && marks <=44){
//         cout << "E";
//     } else if (marks >= 45 && marks <=49){
//         cout << "D";
//     } else if (marks >= 50 && marks <=59){
//         cout << "C";
//     } else if (marks >= 60 && marks <=79){
//         cout << "B";
//     } else if (marks >= 80 && marks <=100){
//         cout << "A";
//     }
// }

int main(){
    int age;
    cout << "enter age: ";
    cin >> age;

    if(age < 18){
        cout << "not eligible for the job";
    } else if(age <= 57 ){
        cout << "eligible for job";
        if (age >= 55){
            cout << ", but retirement soon";
        }
    } else{
        cout << "retirement time";
    }
}