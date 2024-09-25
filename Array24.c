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
    
    d = a/2;


    if(a%2!=0){
        for(int i = 1;d>=i;i++){
        int k;
        int l;
        k = arr[d-i];
        l = arr[d+i];
        arr[d-i] = l;
        arr[d+i] = k;
    }
    }
    else{

        for(int i = 0;d>=i;i++){
        int k;
        int l;
        k = arr[d-i -1];
        l = arr[d+i];
        arr[d-i-1] = l;
        arr[d+i] = k;

    }

    }

    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }
}


