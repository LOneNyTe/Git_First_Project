#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    int b;
    int d;
    printf("Enter the range of the array: ");
    scanf("%d", &b);
    scanf("%d", &d);

    int l = d-b+1;

    int m = (d-b+1)/2;
    int n;
    if((d-b+1)%2!=0){
     n = m+b;
    }
    else{

        n = m+b-1;


    }

    if((d-b+1)%2!=0){

        for(int i = 1;d-n>=i;i++){
            int p;
            int o;
            p = arr[n-i];
            o = arr[n+i];
            arr[n-i] = o;
            arr[n+i] = p;
        }

    }
    else{
        for(int i = 0;d-n>i;i++){
            int p;
            int o;
            p = arr[n-i];
            o = arr[n+i+1];
            arr[n-i] = o;
            arr[n+i+1] = p;
        }
    }
    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }


}