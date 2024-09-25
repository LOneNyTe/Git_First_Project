#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);

    int arr[a];
    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
    int b;
    int d;
    printf("Enter the indices range to delete: ");
    scanf("%d", &b);
    scanf("%d", &d);

    int e = d-b;
    int f = a-d+b;
    int p = 1;
    int h = 0;
    

    for(int i = d;a>i;i++){
        int l = arr[d+p];
        int k = arr[b-p];
        arr[d+p] = k;
        arr[b+h]= l;
        p++;
        h++;


    }

    for(int i = 0;a-d+b-1>i;i++){
        printf("%d", arr[i]);
    }


    

   

}