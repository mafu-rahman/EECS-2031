#include <stdio.h>

int main(){

    int flags;

    printf("%d\n", flags);
    
    flags = flags | (1<<5);

    printf("%d\n", flags);


    return 0;
}