#include <stdio.h>

int main(){
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);

    int b;
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int arr1[a][b];

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    int d;
    printf("Enter the number of rows: ");
    scanf("%d", &d);

    int e;
    printf("Enter the number of columns: ");
    scanf("%d", &e);

    int arr2[d][e];

    for(int i = 0;d>i;i++){
        for(int j = 0;e>j;j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr[a][e];

    int l = 0;
    int m = 0;
    int n = 0;
    int p = 0;

    for(int i = 0;a>i;i++){
        for(int j = 0;e>j;j++){
            arr[i][j] = 0;
        }
        
    }


    for(int i = 0;a>i;i++){
        p = 0;
        for(int j = 0;e>j;j++){
            for(int q = 0;b>q;q++){
            arr[i][j] = arr[i][j] + arr1[l][q] * arr2[q][p];
            
            }

            p++;
        }
        l++;
    }

     for(int i = 0;a>i;i++){
        for(int j = 0;e>j;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }




}