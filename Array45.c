#include <stdio.h>

int main(){
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);

    int b;
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int arr[a][b];

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int arr1[b][a];

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            arr1[j][i] = arr[i][j];
        }
    }

    for(int i = 0;b>i;i++){
        for(int j = 0;a>j;j++){
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }





}