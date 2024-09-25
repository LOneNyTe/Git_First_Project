#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the string ");
    scanf("%d",&a);

    char str[a];

    getchar();

    fgets(str,a,stdin);

    for(int i = 0;str[i];i++){
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97&&str[i]<=122)){
            printf("%c ",str[i]);
        }
    }
}