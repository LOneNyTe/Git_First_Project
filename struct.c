#include <stdio.h>

struct student
{
    char name[50];
    int age;
    int roll;
};


int main(){


    struct student s1;

    s1.roll = 101;

    printf("%d", s1.roll);
   


}