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

    for(int j = 0;a>j;j++){
        for(int k = 0;a>k;k++){
            if((arr[j] == arr[k]) && (j!=k)){

                d = arr[j];
                break;

            }
        }
    }

    printf("%d", d);


}