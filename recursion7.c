#include <stdio.h>

int rev = 0;

int num(int a){

    int rem = a%10;
        if(a==0){
        printf("%d", rev);
        return 1;
        }
    rev = rev*10 +rem;

    

    return num(a/10);

}

int main(){

    num(1234);

}