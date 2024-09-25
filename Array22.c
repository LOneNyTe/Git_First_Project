#include <stdio.h>
int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
    int d;
    printf("Enter the index of the array: ");
    scanf("%d", &d);

    printf("%d", arr[d]);



}