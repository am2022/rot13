#include "code.h"

string code::code_string(string s){
    char buff;
    string out;

    for(int i = 0;i < s.length();i++){
        buff = s[i];
        
        if(isalpha(buff)){
            if(tolower(buff) - 'a' < 14){
                out.append(1, buff + 13);
            }
            else{
                out.append(1, buff - 13);
            }
        }
        
    }

    return out;
}
