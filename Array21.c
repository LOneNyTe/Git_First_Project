#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;){
        scanf("%d", &arr[i]);
        if(arr[i]==0 || arr[i]==1){
            i++;
        }
    }

    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }


}