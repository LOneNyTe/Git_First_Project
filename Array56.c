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
        for(int j = 0;b>j;){
            if(j >= i&&j<b-i){
                printf("%d",arr[i][j]);
                if(j<b-1){
                 j++;
                }
            }
            if(j==b-i-1&&i<a-1){
                
                printf("%d",arr[i][j]);
                i++;
                
            }
            if(i==a-1&&j>0){
                printf("%d",arr[i][j]);
                j--;
                
                
            }
            if(j==0&&i>0){
                printf("%d",arr[i][j]);
                i--;
                


            }
            
        }
        printf("\n");

    }
   




}