#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int a = sizeof(arr);
    printf("%d \n", a);

    int d = sizeof(arr)/sizeof(int);

    printf("%d", d);

    // size of array for int  = number of elements * 4
}