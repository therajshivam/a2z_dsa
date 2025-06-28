#include<iostream>
using namespace std;
// functions are set of code which performs something for you
// functions are used to modularise code
// functions are used to increase readability
// functions are used to use same code multiple times

// four kind of functions:-
// void -> does not return anything
//  return, parameterised, non parameterised

void printName(string name){
    cout << "Hello " << name << endl;
}

// take two nums and return its sum 
// return func
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int main(){
    string name = "Shivam";
    printName(name);

    string name2 = "Sid";
    printName(name2);

    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1, num2);
    cout << result;
    

    return 0;
}