#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    int d = 0;
    int e = 0;

    for(int i = 0;a>i;i++){
        if(arr[i]%2==0){
            d++;

        }

        else{
            e++;
        }
    }

    int even[d];
    int odd[e];

    int j = 0;
    int k = 0;

    for(int i = 0;a>i;i++){
        if(arr[i]%2==0){

            even[j] = arr[i];

            j++;

        }

        else{
            odd[k] = arr[i];
            k++;
        }
    }

    for(int i = 0;d>i;i++){
        printf("%d", even[i]);
    }

    for(int i = 0;e>i;i++){
        printf("%d", odd[i]);
    }




}