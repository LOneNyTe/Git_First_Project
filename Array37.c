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

    int pro = 1;

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            pro = pro * arr[i][j];
        }
    }

    printf("%d", pro);
}