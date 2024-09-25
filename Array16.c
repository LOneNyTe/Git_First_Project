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

    int d = 0;

    int e = 0;

    for(int i = 0;a>i;i++){
        if(arr[i]%2==0){
            sum1 = sum1 + arr[i];
            d++;

        }

        else{
            sum2 = sum2 +arr[i];
            e++;
        }
    }

    printf("Average of even elements is: %d Average of odd element is: %d",sum1/d,sum2/e );


}