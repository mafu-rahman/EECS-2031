/***************************************
* EECS2031A 21SU - Lab1 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
****************************************/

#include <stdio.h>

int sum (int i, int j)
{
  return i+j;           
}


main()
{
  int a, b;
  printf("Please enter two integers separated by a blank: " );
 
  scanf( "%d<><><>%d",  &a, &b);     /* assign value to a b  */
 
  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}

