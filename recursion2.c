#include <stdio.h>
int num(int a){

    printf("%d", a);
    if(a==1){
        return 1;
    }

    return num(a-1);
}
int main(){

    num(10);

}