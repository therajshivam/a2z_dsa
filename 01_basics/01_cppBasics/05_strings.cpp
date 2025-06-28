#include<iostream>
using namespace std;

int main(){
    string s ="Hello World!";

    cout << s[0];
    cout << s[1];
    cout << s[2];
    cout << s[3];
    cout << s[4];
    cout << s[5];
    cout << s[6];
    cout << s[7];
    cout << s[8];
    cout << s[9];
    cout << s[10];
    cout << s[11];
    cout << s[12];
    cout << endl;

    int length = s.size();
    cout << length << endl;
    cout << s[length-1] << endl;

    s[length-1] = 'z';
    cout << s[length-1] << endl;



    return 0;
}