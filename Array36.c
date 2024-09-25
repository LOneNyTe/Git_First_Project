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

    int sum = 0;

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);



}

