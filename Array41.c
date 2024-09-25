#include <stdio.h>

int main(){

    int a;
    printf("Enter the number of rows of both arrays: ");
    scanf("%d", &a);

    int b;
    printf("Enter the number of columns of both  arrays: ");
    scanf("%d", &b);

    int arr1[a][b];

    int arr2[a][b];

    printf("Enter the elements of first array: ");

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of second array: ");

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    int e = 0;

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            if(arr1[i][j]!=arr2[i][j]){

                e = 1;
                break;

            }
        }
        if(e==1){
            break;
        }
    }

    if(e==0){
        printf("The arrays are similar");
    }
    else{
        printf("The arrays are different");
    }



}
