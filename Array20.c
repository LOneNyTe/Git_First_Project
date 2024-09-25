#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    int d;
    int check =1;
    int count=1;
    for(int j = 0;a>j&&check==1;j++){
        for(int k = 0;a>k;k++){
            if((arr[j] == arr[k]) && (j!=k)){

                d = arr[j];
                count++;
                check=0;
                

            }
        }
    }

    printf("%d", d);
    printf("%d", count);


}