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
    printf("Enter the value: ");
    scanf("%d", &d);

    int e = 0;

    for(int i = 0;a>i;i++){
        if(arr[i]==d){

            e = 1;
            break;

        }
    }

    if(e==1){
        printf("element found");
    }
    else{
        printf("not found");
    }


}