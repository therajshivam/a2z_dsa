#include<bits/stdc++.h>
using namespace std;

// void function : will not return anything
void print(){
    cout << "Hi" << endl;
}

// return function : will return something
int sum(int a, int b){
    return a + b;
}

int main(){
    print();
    int s = sum (2, 5);
    cout << s;
    return 0;
}