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
    printf("Enter the element to be deleted: ");
    scanf("%d", &d);
    int e;

    for(int i = 0;a>i;i++){
        if(arr[i]==d){

            e = i;
            break;

        }
        
    }
    int m = 0;
    int j = 1;

    for(int i = e;a-e>i;i++){
        int k;
        int l;
        k = arr[e+m];
        l = arr[e+j];
        arr[e+m] = l;
        arr[e+j] = k;
        m++;
        j++;

        
    }
    for(int i = 0;a-1>i;i++){
        printf("%d", arr[i]);
    }





    
}