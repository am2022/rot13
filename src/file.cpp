#include "file.h"

file::file(string fname_in, string fname_out){
    this->file_name_in.open(fname_in);
    this->file_name_out.open(fname_out);
    this->fnameout_entered = 1;
}

file::file(string fname_in){
    this->file_name_in.open(fname_in);
    this->fnameout_entered = 0;
}

int file::is_fname_in_valid(string fname_in){
    ifstream f_test(fname_in);

    if(! f_test){
        return 0;
    }
    else{
        return 1;
    }
}