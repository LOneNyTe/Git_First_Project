#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);

    int arr[a];

    int sum = 0;

    for(int i = 0; a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; a>i;i++){
        sum = sum + arr[i];
    }

    printf("%d", sum);


}