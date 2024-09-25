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
            for(int l = 0;a>l;l++){
                for(int m = 0;b>m;m++){
                    if((arr[l][m]<arr[l+1][m])&&(a>l+1)){
                        int d = arr[l][m];
                        int e = arr[l+1][m];

                        arr[l][m] = e;
                        arr[l+1][m] = d;
                    }
                    if((arr[l][m]<arr[l][m+1])&&(b>m+1)){
                        int f = arr[l][m];
                        int g = arr[l][m+1];

                        arr[l][m] = g;
                        arr[l][m+1] = f;

                    }
                    
                }
            }
        }
    }
    for(int i = 0;a>i;i++){
        for(int j = 0;b>j;j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    // This is wrong


}