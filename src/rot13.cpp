#include <iostream>
#include <string>
#include "code.cpp"
#include "file.cpp"
using namespace std;

int main(){
    code c;

    string code;
    string a_file_in;
    string file_in;
    string a_file_out;
    string file_out;

    cout<<"do you want to import file for input(y/n):";
    cin>>a_file_in;
    if(a_file_in[0] == 'Y' || a_file_in[0] == 'y'){
        cout<<"enter file name:";
        cin>>file_in;
        cout<<"do you want to export output(y/n):";
        cin>>a_file_out;
        if(a_file_out[0] == 'Y' || a_file_out[0] == 'y'){
            cout<<"enter file name:";
            cin>>file_out;
            file fout(file_in, file_out);
        }
        else{
            file fout(file_in);
        }
    }

    cout<<"enter the text that you want:";
    getline(cin, code);
    cout<<"result:"<<c.code_string(code);

    return 0;
}
