#include <iostream>
#include <istream>
#include <new>
#include <string>
#include "temp_class.h"

using namespace std;

//every member function implicitly uses this pointer. 
void Temp::set_all_to_zero(){
    x = 0;
    y = 0;
    z = 0;
    sum = 0;
}

void Temp::print_all(){
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    cout<<"sum = "<<sum<<endl;
}

Temp* Temp::operator+(Temp t){
    Temp *temp = new Temp(0, 0, 0);
    temp->x = x + t.x;
    temp->y = y + t.y;
    temp->z = z + t.z;
    return temp;
}

Temp operator+(Temp &t1, Temp t2){
    Temp *obj = new Temp(0, 0, 0);
    obj->x = t1.x + t2.x;
    obj->y = t1.y + t2.y;
    obj->z = t1.z + t2.z;
    return *obj;
}

// sum_of_all is a friend function. C++ only pass the value of the object, thus
// change of obj.sum only cause effect inside the function. The actual value of
// sum inside obj is not affected.
int sum_of_all(Temp &obj){
    obj.sum = obj.x + obj.y + obj.z;
    return obj.sum;
}

int main(void){
    Temp temp1, temp2(1, 2, 3);
    //c++ pass value only?
    temp2.set_all_to_zero();
    temp2.print_all();
    sum_of_all(temp1);
    temp1.print_all();
    //created temporary object Temp(2, 2, 2)
    Temp(2,2,2).print_all();
    Temp(0, 1, 2)+temp1;//the + is overloaded as member function
    temp1 + temp2;//My guess is there is going to be compilation an error. 
    sum_of_all(temp1);
    return 1;
}

