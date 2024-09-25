#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
    

    for(int j = 0;a>j;j++){
        for(int k = 0;a>k;k++){
            if(arr[k+1]<arr[k]){
                int a;
                int b;

                a = arr[k+1];
                b = arr[k];
                arr[k] = a;
                arr[k+1] = b;
            }
        }
        
    }

    printf("%d", arr[0]);

    

    
}