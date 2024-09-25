#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the string ");
    scanf("%d", &a);
    char str[a];
    scanf("%s", str);

    int b;
    b = sizeof(str)/sizeof(str[0]);
    printf("%d", b);


}