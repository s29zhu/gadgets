#include <iostream>
#include <sstream>
#include <string>
//include new if we want to use keyword new
#include <new>
//limits.h contain definition of INT_MAX
#include <limits.h>

using namespace std;

//with typedef 
typedef struct {
    string name;
    string ID;
}student;

//without typedef
struct faculty{
    string name;
    string ID;
    int work_year;
};

int main(void){
    //in c++, there wont be an error when compile. however, if the file is saved
    //as .c and compiled by gcc, there would be an error that for line24 saying
    //that unrecoganized type faculty. Hence in c,  key word "struct" is needed
    //before faculty.
    student *stu = NULL;
    faculty fa;
    int num_of_stu = 0;
    string temp;
    cout<<"Please input the number of  student."<<endl;
    //what will happen if I input some character other number?
    //if that way, the value of num_of_stu would not be changed.
    cin >> num_of_stu;
    //clear out the input value, otherwise getline() in line43 will retrieve it
    //as the student name. 
    //cin.clear reset error state flag, the default one is goodbit
    //cin.ignore Extracts characters from the input sequence and discards them.
    //The extraction ends when n characters have been extracted and discarded or
    //when the character delim is found, whichever comes first. In the latter
    //case, the delim character itself is also extracted.
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    //cout << num_of_stu;
    stu = new student[num_of_stu];
    for(int i = 0; i < num_of_stu; i++){
        cout<<"Please input student name."<<endl;
        getline(cin, stu[i].name);
        cout<<"Please input the student id."<<endl;
        getline(cin, stu[i].ID);
        
    }
    fa.name = "gold silver";
    fa.ID = "1234";
    fa.work_year = 2010;
    streambuf *test;
    //declare a object of stringstream class, keyword new declare space from
    //dynamic space. If we declare it like this stringstream ss, then the space
    //would be declared from stack which would be exhausted quickly.
    stringstream *ss = new stringstream("123");
    *ss >> test;
    cout<<"test "<<test<<endl;
    //declare a temporary object of stringstream, the problem is we cannot
    //extract it to string object. 
    string test_string;
    stringstream("hello world") >> test_string; //cannot be compiled
    delete[] stu;
    return 1;
}
