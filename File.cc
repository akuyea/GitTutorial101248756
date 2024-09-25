#include "File.h"

File::File(string name, string content, Date date){
    this->name = name;
    this->content = content;
    this->date = date;
}

bool File::lessThan(Date& d){
    if(this->date.lessThan(d)){
        return true;
    }else{
        return false;
    }
}

void File::print(){
    cout << "File title: " << name << endl;
    cout << "Date added: ";
    date.print();
}

void File::printContents(){
    this->print();
    cout << "Content: " << content <<endl;
}