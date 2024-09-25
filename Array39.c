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
    printf("Enter the number: ");
    scanf("%d", &d);

    int e = 0;
   
    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            if(arr[i][j]==d){
                e = 1;
                break;
            }
        }
        if(e==1){
            break;
        }
    }

    if(e==1){
        printf("%d is present in the array", d);
    }
    else{
        printf("%d is not present in the array", d);
    }

}
