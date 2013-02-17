/*
*Author: Shashazhu  
*Test the endianess of pc
*Big endian: most significant byte stores first
*Little endian: least significant byte stores first
*least significant byte/bit means the right most byte/bit
*/
#include <iostream>
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
