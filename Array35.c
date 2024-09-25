#include <stdio.h>

void input(int a, int b,int arr[][b]){

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            scanf("%d", &arr[i][j]);
        }

    }



}

// we have to pass sizes first and atleast pass the column


void output(int a, int b,int arr[][b]){

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");

    }



    



}
int main(){
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);

    int b;
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int arr[a][b];

    input(a,b,arr);

    output(a,b,arr);


}