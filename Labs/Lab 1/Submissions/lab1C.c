/***************************************
* EECS2031AC 21F – Lab1 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
****************************************/

#include <stdio.h>

/* function definition */
float sum (float i, float j){
   return i + j;             
}

void greet(int i){
  printf("Hello %d!\n",i);
}

int main()
{  
   int a = 2031;
   greet(a);
   int b = 1012;
   greet(b);
   float x =2.2, y=3.3;
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}


