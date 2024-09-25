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
        for(int j = 0;b>j;j++){
            if(j>=i){
                printf("%d", arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


}