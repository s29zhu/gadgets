//reponse to question
//http://stackoverflow.com/questions/14930512/c-iostream-read-with-delimiter-of\
//-multiple-bytes
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str;
    int length_of_delimiter = 3;
    // let the dilimiter be "ABC"
    const char *delimiter = "ABC";
    char temp = '0';
    bool over = false;

    cout<<"Enter the stream"<<endl;

    temp =  cin.get();
    int  i = 0;
    while(over == false){ 
            for(i = 0; temp  == delimiter[i] && i < length_of_delimiter; i++){
                str += temp;
                if(cin.good())
                    temp = cin.get();
                else{
                    cout<<"error"<<endl;
                    break;
                }
                    
            }
            if(i == length_of_delimiter){
                //chop off the delimiter
                str.erase(str.end() - length_of_delimiter, str.end());
                over = true;
            }
            else {
                str += temp;
                if(cin.good())
                    temp = cin.get();
                else{
                    cout<<"error"<<endl;
                    break;
                }
            }
    }
    cout<<"The stream we wanted is: "<<str<<endl;
    return 0;
}
