#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Date.h"

using namespace std;

class File{
    public:
        File(string name, string content, Date date);
        bool lessThan(Date&);
        void print();
        void printContents();
    private:
        string name, content;
        Date date;   

};

#endif