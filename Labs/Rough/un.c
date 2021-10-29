#include <stdio.h>

int main(){

    int a = 22;
    int *p = &a;
    *p = 24;
    int *p2 = p;
    int **p3 = &p2;
    (*p2)++;
    (**p3) += 10;

    printf("%d %d %d %d", a, *p, *p2, **p3);

    
    


   


    return 0;
}