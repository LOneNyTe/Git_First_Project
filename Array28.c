#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr1[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr1[i]);
    }

    int b;
    printf("Enter the size of array: ");
    scanf("%d", &b);

    int arr2[b];

    for(int i = 0;b>i;i++){
        scanf("%d", &arr2[i]);
    }
    int e = 0;
    int f = 0;

    for(int i = 0;a>i;i++){
        if(arr1[i]%2!=0){
            e++;
        }
    }

    for(int i = 0;b>i;i++){
        if(arr2[i]%2!=0){
            f++;
        }
    }

    int arr4[e+f];

    int j =0;
    int k = 0;

    for(int i = 0;a>i;i++){
        if(arr1[i]%2!=0){
            arr4[j] = arr1[i];
            j++;
        }
    }
    for(int i = 0;b>i;i++){
        if(arr2[i]%2!=0){
            arr4[j+k] = arr2[i];
            k++;
        }
    }

    for(int i = 0;e+f>i;i++){
        printf("%d", arr4[i]);
    }





}