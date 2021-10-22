#include <stdio.h>

#define SIZE = 40

int main(){
    int c;
    float resu[SIZE];
    int index = 0;

    c = getchar();
    while ( c != EOF){ 
  
    if (c >= '0' && c <= '9')
    { 
         resu[index] = c;
         index++;
         resu[index] = c;
         index++;
    }  

    printf("--------\n");
  
    for(i=0, ....)
        printf("%d\t%d\n", resu[i],resu[i] *2);

   
  }

    return 0;
}