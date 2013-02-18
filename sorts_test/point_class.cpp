#include <iostream>
#include <istream>
#include <new>
#include <string>
#include "point_class.h"

using namespace std;

//every member function implicitly uses this pointer. 
void Point::set_all_to_zero(){
    x = 0;
    y = 0;
    z = 0;
    sum = 0;
}

void Point::print_all(){
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    cout<<"sum = "<<sum<<endl;
}

Point* Point::operator+(Point t){
    Point *temp = new Point(0, 0, 0);
    temp->x = x + t.x;
    temp->y = y + t.y;
    temp->z = z + t.z;
    return temp;
}

Point operator+(Point &t1, Point t2){
    Point *obj = new Point(0, 0, 0);
    obj->x = t1.x + t2.x;
    obj->y = t1.y + t2.y;
    obj->z = t1.z + t2.z;
    return *obj;
}

// sum_of_all is a friend function. C++ only pass the value of the object, thus
// change of obj.sum only cause effect inside the function. The actual value of
// sum inside obj is not affected.
int sum_of_all(Point &obj){
    obj.sum = obj.x + obj.y + obj.z;
    return obj.sum;
}

int main(void){
    Point temp1, temp2(1, 2, 3);
    //c++ pass value only?
    temp2.set_all_to_zero();
    temp2.print_all();
    sum_of_all(temp1);
    temp1.print_all();
    //created temporary object Point(2, 2, 2)
    Point(2,2,2).print_all();
    Point(0, 1, 2)+temp1;//the + is overloaded as member function
//    temp1 + temp2;//My guess is there is going to be compilation an error. 
    //Since the compiler does not know which function to choose. Both of the
    //functions can be overloaded.
    return 1;
}

