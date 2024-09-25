#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;

    for(int j = 0;a>j;j++){
        sum = sum + arr[j];
    }

    printf("%d", sum/a);

    
}