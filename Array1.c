#include <stdio.h>

int main(){
    int a = 5;
    //printf("Enter the size of the array: ");
    //scanf("%d", &a);
    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int j = a-1;j>=0;j--){
        printf("%d", arr[j]);
    }
    // array takes address of each element together
    // because its int the address are seperated by 4 byte
    
}