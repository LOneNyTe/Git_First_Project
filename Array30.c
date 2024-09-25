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

    

    for(int i = 0;a>i;i++){
        if(arr[i]==d){
            continue;
        }
        
        
        int e = 1;
        for(int j = 0;a>j;j++){
            if((arr[j]==arr[i])&& (j!=i)&&(j>i)){

                d = arr[j];
                e++;




            }

            
        }
        if(e>1){
        printf("The count of %d is %d ", d,e);
        }
    }

    // This is wrong 

    
}