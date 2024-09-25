#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }

    int sum1 = 0;

    int sum2 = 0;

    for(int i = 0;a>i;i++){
        if(arr[i]%2==0){
            sum1 = sum1 + arr[i];

        }

        else{
            sum2 = sum2 +arr[i];
        }
    }

    printf("Sum of even elements is: %d Sum of odd element is: %d",sum1,sum2 );


}