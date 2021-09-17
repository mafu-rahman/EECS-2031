/***************************************
* EECS2031A 21SU - Lab1 *
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
   printf("Enter two float numbers separated by ##: ");
   float x,y;
   scanf("%f##%f",&x,&y);
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;
}


