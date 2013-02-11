#include "stdio.h"

//with typedef 
typedef struct {
    char name;
    char ID;
}student;

//without typedef
struct faculty{
    char name;
    char ID;
    int work_year;
};

int main(void){
    student *st = NULL;
    struct faculty fa;
    return 1;
}
