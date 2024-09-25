#include <stdio.h>
#include <strings.h>

struct student
{
    char name[50];
    int age;
    int roll;
};





int main(){
    int a;
    printf("Enter the size of the array ");
    scanf("%d", &a);


    struct student s1[a];


    for(int i = 0;a>i;i++){
        printf("Enter the roll no for %d\n", i);
        scanf("%d", &s1[i].roll);
        

        printf("Enter the age no for %d\n", i);
        scanf("%d", &s1[i].age);

        printf("Enter the name for %d\n", i);

        getchar();

        fgets(s1[i].name,50,stdin);

    }
}