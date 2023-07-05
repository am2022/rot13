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
    public:
        file(string fname_in, string fname_out);
        file(string fname_in);
};

#endif