#include <stdio.h>

int input(int arr[], int a){

     arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    return arr;



}

void output(int arr[], int a){

    arr[a];

    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }

    




}

int main(){

    int a;
    printf("Enter the size of the array");
    scanf("%d", &a);

    int arr[a];
    arr[a] = input(arr, a);

    output(arr,a);


    return 0;




    





}