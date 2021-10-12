#include <stdio.h>
#include <stdlib.h>

#define MY_PRINT(x,y) printf("%d -> %d\n", x,y)

#define SQUARE(x)  x * x


int main(int argc, char *argv[])
{
    int i=7; 
    int j = 8;

    int resu = SQUARE(i);
    MY_PRINT(i, resu);

    resu = SQUARE(j);
    MY_PRINT(j, resu);

    resu = SQUARE(i + j);
    MY_PRINT(i+j, resu);

  /* 
    int over = 1000/SQUARE(i+j);
    printf("%d\n", over);
    double oneover = 1.0/SQUARE(i+j);
    printf("%.4f\n", oneover);
  */

    printf("This is file %s, line %d, run on  %s %s\n\n",__FILE__, __LINE__,__DATE__, __TIME__);
  
   // system ("ls -l");

    return 0;
}

