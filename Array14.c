#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    printf("Enter the size of array: ");
    scanf("%d", &b);

    int arr1[a];
    int arr2[b];

    printf("Enter the element of first array: ");
    for(int i = 0;a>i;i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the element of second array: ");
    for(int i = 0;b>i;i++){
        scanf("%d", &arr2[i]);
    }

    int arr4[a+b];

    for(int i = 0;a>i;i++){
        arr4[i] = arr1[i];
    }
    int j = 0;

    for(int i = a;a+b>i;i++){
        arr4[i] = arr2[j];
        j++;
    }

    for(int i = 0;a+b>i;i++){
        printf("%d", arr4[i]);
    }











}