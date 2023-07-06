#ifndef FILE_H
#define FILE_H

#pragma once
#include <iostream>
#include <fstream>
#include "code.cpp"

using namespace std;

class file{
    private:
        ifstream file_name_in;
        ofstream file_name_out;
        int fnameout_entered;
    public:
        file(string fname_in, string fname_out);
        file(string fname_in);
        int is_fname_in_valid(string fname_in);
        void code_file();
};

#endif