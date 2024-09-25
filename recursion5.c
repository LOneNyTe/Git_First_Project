#include <stdio.h>

int pro = 1;

int num(int a, int b){

    pro = pro * a;

    if(b==1){
        printf("%d", pro);
        return 1;
    }

    return num(a,b-1);

}

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    num(a,b);


}

