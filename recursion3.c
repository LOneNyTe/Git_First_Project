#include <stdio.h>

int sum = 0;

int num(int a){

    sum = sum +a;

    if(a==1){
        printf("%d", sum);
        return 1;
    }

   return num(a-1);



}

int main(){

    int a;
    scanf("%d", &a);

    num(a);

}
