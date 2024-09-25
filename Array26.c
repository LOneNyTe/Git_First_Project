#include <stdio.h>
int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0;a>i;i++){
        for(int j = 0;a>j;j++){
            if((arr[j]<arr[j+1]) && j+1<a){
                int d;
                int e;
                d = arr[j];
                e = arr[j+1];

                arr[j] = e;
                arr[j+1] = d;
            }
        }
        
    }

    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }

}