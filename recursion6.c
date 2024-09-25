#include <stdio.h>

int b = 0;

int num(int a){
    
    

    if(a==0){

        printf("%d", b);

        return 1;

    }
    b++;

    return num(a/10);
}

int main(){
    int a;
    scanf("%d", &a);

    num(a);

}