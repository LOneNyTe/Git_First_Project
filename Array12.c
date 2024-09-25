#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int i = a-1;i>=0;i--){
        printf("%d", arr[i]);
    }

}