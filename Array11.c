#include <stdio.h>

int main(){

    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    int pro = 1;

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0;a>i;i++){
        pro = pro * arr[i];
    }

    printf("%d", pro/a);





}