#include <stdio.h>

int main(){
    char str[6] = {'a', 'b', 'c', 'd', 'e'};
    printf("%s", str);
    // we have to take one more size than required as /0 is required in the end after every string