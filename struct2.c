#include <stdio.h>

union student
{
    char name[50];
    int age;
    int roll;
};


int main(){


    union student s1;

    s1.roll = 101;
    s1.age = 20;


    printf("%d", s1.roll);

    
}