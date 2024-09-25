#include <stdio.h>

int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);

    int arr[a];
    for(int i = 0;a>i;i++){
        scanf("%d", &arr[i]);
    }
   

    for(int i = 0;a>i;i++){
        
        for(int j = 0;a>j;j++){
            if((arr[i]==arr[j])&&(j!=i)){
                if(j>i){
                int m = 0;
                int n = 1;
                for(int p = j;a-j>=p;p++){
                int k;
                int l;
               k = arr[j+m];
               l = arr[j+n];
                arr[j+m] = l;
               arr[j+n] = k;
                m++;
               n++;

        
                }
                }
                else{
                int m = 0;
                int n = 1;
                for(int p = i;a-i>=p;p++){
                int k;
                int l;
               k = arr[i+m];
               l = arr[i+n];
                arr[i+m] = l;
               arr[i+n] = k;
                m++;
               n++;

        
                }

                }

            }
        }
    }

    for(int i = 0;a>i;i++){
        printf("%d", arr[i]);
    }



}