#include <iostream>
#include <string>
#include "code.cpp"
#include "file.cpp"
using namespace std;

int main(){
    code c;

    string code;
    string a_file_in;

    cout<<"do you want to import file for input(y/n):";
    cin>>a_file_in;
    
    cout<<"enter the text that you want:";
    getline(cin, code);
    cout<<"result:"<<c.code_string(code);

    return 0;
}
