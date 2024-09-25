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

    int g;
    int f;


    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            int d = 0;
            for(int k = 0;a>k;k++){
                
                for(int l = 0;b>l;l++){
                    if(arr[i][j]==arr[k][l] ){
                        d++;

                        g = k;
                        f = l;

                        


                    }
                }
                
            }
            if((d>1)){
                printf("%d is repeated %d times \n", arr[i][j],d);
            }
        }
    }


}