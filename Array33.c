#include <stdio.h>
int main(){
int a;
printf("Enter the size of arry1");
scanf("%d", &a);

int arr1[a];

for(int i = 0;a>i;i++){
    scanf("%d", &arr1[i]);
}
int b;
printf("Enter the size of array");
scanf("%d", &b);

int arr2[b];

for(int i = 0;b>i;i++){
    scanf("%d", &arr2[i]);
}

for(int i = 0;a>i;i++){
    for(int j = 0;a>j;j++){
        if((arr1[j]>arr1[j+1])&&(a>j+1)){
            int d = arr1[j+1];
            int e = arr1[j];
            arr1[j+1] = e;
            arr1[j] = d;
        }
    }
}

for(int i = 0;a>i;i++){
    for(int j = 0;b>j;j++){
        for(;arr1[i]==arr1[i+1];i++){

        }
        if(arr1[i]==arr2[j]){
            printf("%d", arr1[i]);
            i++;
            j = 0;

        }
    }

}



}
