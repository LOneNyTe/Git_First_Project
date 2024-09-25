#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    int d = 0;
    int e = 0;

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0;a>i;i++){
        if(arr[i]%2==0){
            d++;

        }

        else{
            e++;
        }
    }

    printf("number of even = %d number of odd = %d",d,e );


}