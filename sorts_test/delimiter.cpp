#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str;
    int length_of_delimiter = 3;
    char *delimiter = new char[length_of_delimiter];
    char temp = '0';
    bool over = false;

    delimiter = "ABC";
    cout<<"Enter the stream"<<endl;

    temp =  cin.get();
    int  i = 0;
    while(over == false){ 
            for(i = 0; temp  == delimiter[i] && i < length_of_delimiter; i++){
                str += temp;
                temp = cin.get();
            }
            if(i == length_of_delimiter){
                //chop off the delimiter
                str.erase(str.end() - length_of_delimiter, str.end());
                over = true;
            }
            else {
                str += temp;
                temp = cin.get();
            }
    }
    cout<<"The stream we wanted is: "<<str<<endl;
    return 0;
}
