#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 10
 
int main(){
  int a,b;
  char arr [SIZE];

  printf("Enter a word of positive number or 'quit': " );
  scanf("%s", arr);
  while(   )
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);

   
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* textbook scans from left to right.
 Here you should scan from right to left. This is a little complicated 
 but more straightforward (IMHO) */

int my_atoi (char c[])
{


}
