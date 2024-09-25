#include <stdio.h>
#include <string.h>

int main(){
    int a;
    printf("Enter the size of the string ");
    scanf("%d", &a);
    char str[a];
    getchar();
    scanf("%s",str);

    char str2[a];

    strcpy(str2,str);
    printf("%s", str2);

    // getchar(); is used to store nextline
    // putchar(variable name); is used to print character
    // scanf("%s", str) does not different words
    


}