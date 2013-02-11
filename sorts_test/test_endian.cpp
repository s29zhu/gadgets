#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void){
    union{
        int i ;
        char c[sizeof(int)];
    }un;
    un.i = 0x01020304;
    switch(un.c[0]){
        case 0x01:
            cout<<"big endian"<<endl;
            break;
        case 0x04:
            cout<<"little endian"<<endl;
            break;
        default:
            cout<<"wrong, undetermined"<<endl;
    }
    return 1;
}
