#include <stdio.h>
#include <limits.h>

int main(){

    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    int d = INT_MAX;
    int e = INT_MIN;

    for(int i = 0;a>i;i++){
        if(arr[i]>e){
            e = arr[i];
        }

        if(arr[i]<d){
            d = arr[i];
        }
    }

    printf("Maximum element is: %d Minumum element is: %d", e,d );



}