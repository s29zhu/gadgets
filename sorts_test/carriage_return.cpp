#include <iostream>
#include <string>

using namespace std;

int main(void){
    //carriage return only move the cursor to left-most, do not start new line.
    //Hence we can see that first partial sentence is overwritten by ternimal
    //promt.
    cout<<"This is the newline.\nHere comes the carriage return.\r";
    return 1;
}
