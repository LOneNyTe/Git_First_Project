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

    int d;
    int e;

    printf("Enter the rows to be exchanged");
    scanf("%d", &d);
    scanf("%d", &e);

    for(int i = 0;b>i;i++){
        int f = arr[d-1][i];
        int g = arr[e-1][i];

        arr[d-1][i] = g;
        arr[e-1][i] = f;


    }
    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    

    
}