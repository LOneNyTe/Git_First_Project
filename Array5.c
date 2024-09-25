#include <stdio.h>

int main(){

    int a = 5;

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int j = 0;a>j;j++){
        printf("%d", arr[j]);
    }

}