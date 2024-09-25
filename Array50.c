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

    int d = 0;
    int e = 0;

    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){

            for(;arr[i][j]==2;){

            }
            
            if(arr[i][j] = 2){
                if(arr[i][j+1]!=0){

                    arr[i][j+1] = 2;

                }
                if(arr[i+1][j]!=0) {
                    arr[i+1][j] = 2;
                }
                d++;
            }
            
            
        }
    }




    


}