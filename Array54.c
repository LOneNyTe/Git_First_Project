#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array ");
    scanf("%d", &a);
    
    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
    int d;
    printf("Enter the number ");
    scanf("%d", &d);
    int e = 0;

    for(int i = 0;a>i;i++){
        for(int j = 0;a>j;j++){

            if((arr[i]+arr[j]==d)&&j>i){
                printf("%d,%d ", arr[i], arr[j]);
                e++;
            }

        }
    }
    printf("count = %d", e);



}