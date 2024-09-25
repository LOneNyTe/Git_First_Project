#include <stdio.h>
#include <limits.h>

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
    int d = INT_MAX;
    int e = INT_MIN;

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            if(arr[i][j]>e){
                e = arr[i][j];
            }
            if(arr[i][j]<d){
                d = arr[i][j];
            }
        }
    }

    printf("Maximum element is %d ",e);
    printf("Minumum element is %d",d);








}