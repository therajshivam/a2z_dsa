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

int main(){
    string name = "Shivam";
    printName(name);

    string name2 = "Sid";
    printName(name2);

    return 0;
}