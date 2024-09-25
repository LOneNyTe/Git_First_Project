#include <stdio.h>
int b = 0;
int d = 1;
int sum = 1;

int num(int a){

    printf("%d", b);
    b = d;
    d = sum;
    sum = b+d;

    

    if(a==1){
        return 1;
    }





    return num(a-1);



}


int main(){

    int a;
    scanf("%d", &a);

    num(a);

}