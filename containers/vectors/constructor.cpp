/*
*Author: s29zhu
*Feb 2013
* constructor of vector
*empty container constructor
*fill constructor
*range constructor
*copy constructor
*move constructor
*initializer list constructor
*/

#include <iostream>
#include <vector>
#include <initializer_list>
#include <list>
using namespace std;


void print(std::vector<int> & vec){
    std::vector<int>::iterator iter = vec.begin();
    for(iter; iter != vec.end(); iter++)
        cout<<" "<< *iter;
    cout<<endl;
}

int main(){
    // fill constructor, construct the container with n zero elements
    std::vector<int> vector1(5);
    std::vector<int> vector2(2,2);
    //empty constructor, all the elements of vectors are 0  
    std::vector<int> vector3;
    std::vector<int>::iterator iter = vector1.begin();
    int i = 0;
    for(iter; iter != vector1.end(); iter++){
        *iter = i;
        i++;
    }
    //range constructor
    cout<<"range constructor"<<endl; 
    std::vector<int> vector4(vector1.rbegin(), vector1.rend() - 1);
    print(vector4);
    //copy constructor
    cout<<"vector 5 copy constructor vector 2"<<endl;
    std::vector<int> vector5(vector2);
    print(vector5);
    //initializer list constructor
    //GCC still use C++98 by default. We  can enable C++11 by passing -std=c++0x
    //as an option to the compiling command
    //(or -std=c++11 in gcc 4.7). Note that no compiler have complete support
    //for C++11 yet.
    std::list<int> li(10,10);
    std::vector<int> vector6={10, 10, 10};
    print(vector6);
    return 1;
}
