#include <iostream>
#include <string>
#include "code.cpp"
#include "decode.cpp"
using namespace std;

int main(){
    code c;
    decode dc;

    string code;

    cout<<"enter the text that you want:";
    cin>>code;
    cout<<"result:"<<c.code_string(code);

    return 0;
}
