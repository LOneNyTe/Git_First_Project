#include <stdio.h>

int pro = 1;
int num(int a){



    pro = pro *a;

    if(a==1){
        printf("%d", pro);
        return 1;
    }

    return num(a-1);


}

int main(){

    int a;
    scanf("%d", &a);

    num(a);

}