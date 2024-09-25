#include <stdio.h>

void swap(int *d, int *e){

    

   int f = *d;
   int g = *e;

   *d = g;
   *e = f;





}

int main(){
    int a = 5;
    int b = 10;
    swap(&a,&b);
    printf("%d %d", a,b);
}