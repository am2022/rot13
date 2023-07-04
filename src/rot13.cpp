#include <iostream>
#include <string>
#include "code.cpp"
using namespace std;

int main(){
    code c;

    string code;

    cout<<"enter the text that you want:";
    getline(cin, code);
    cout<<"result:"<<c.code_string(code);

    return 0;
}
