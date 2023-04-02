#include "code.h"

string code::code_string(string s){
    char buff;
    string out;

    for(int i = 0;i < s.length();i++){
        buff = s[i];
        
        if(isalpha(buff)){
            if(islower(buff)){
                if((buff - 'a') < 13){
                    out.append(1, buff + 13);
                }
                else{
                    out.append(1, buff - 13);
                }
            }
            else if(isupper(buff)){
                if((buff - 'A') < 13){
                    out.append(1, buff + 13);
                }
                else{
                    out.append(1, buff - 13);
                }
            }
        }
        else if(isspace(buff)){
            out.append(1, buff);
        }
        
    }

    return out;
}
