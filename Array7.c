#include<stdio.h>
int input(int arr[],int a){
    arr[a]; // Not necessary
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    return 0;
}
int output(int arr[],int a){
    arr[a]; // Not necessary
    for(int i=0;i<a;i++){
       printf("%d",arr[i]);
    }
    return 0;
}
int main(){
    int a;
    printf("Enter size :");
    scanf("%d",&a);
    int arr[a];
    input(arr,a);
    output(arr,a);
   
    return 0;

    // because arr passes address of the array. 
    // we cannot pass array in function and only do address
}