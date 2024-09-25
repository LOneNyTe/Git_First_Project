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
    

    for(int i = 0;a>i;i++){
        int sum = 0;
        for(int j = 0;b>j;j++){
            sum = sum + arr[i][j];
            
        }
        printf("sum of row%d is %d \n", i+1,sum);
    }

    


    for(int i = 0;b>i;i++){
        int sum = 0;
        for(int j = 0;a>j;j++){
            sum = sum + arr[j][i];
        }
        printf("sum of columns%d is %d \n", i+1,sum);

    }





}