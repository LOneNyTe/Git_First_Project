#include <stdio.h>
int e = 0;
int d = 1;
int sum = 1;

int num(int b){

    printf("%d", e);
    e = d;
    d = sum;
    sum = e+d;

    

    if(b<e){
        return 1;
    }





    return num( b);



}


int main(){
    

    int b;
    scanf("%d", &b);

    num(b );

}