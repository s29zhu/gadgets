#include <iostream>
#include <new>
#include <sstream>
#include "temp_class.h"

Temp *Temp::operator+(Temp t){
    Temp *obj = new Temp(0, 0 , 0);
    obj->x = x + t.x;
    obj->y = y + t.y;
    obj->z = z + t.z;
    //c++ pass value rather than passing reference.
    //the copy construct of the class is called at this time. A copy of thi
    //object is returned and stored in the caller. Regardless of we return a
    //reference or variable. 
   
    return obj;

}

int main(void){
    Temp *obj1 = new Temp(1, 1, 1);
    Temp *obj2 = new Temp(2, 2, 2);
    Temp *obj3 = obj1->operator+(*obj2);
    return 0;
}
