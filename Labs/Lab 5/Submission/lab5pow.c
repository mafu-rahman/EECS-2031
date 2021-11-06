/***************************************
* EECS2031AC–Lab5 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #:  217847518
****************************************/

#include <stdio.h>
#include <math.h>

double my_pow(double ,double);

int main(int argc, char *argv[])
{
   double base; 
   int exponent;  
   printf("enter base and power: ");
   scanf("%lf %d", &base, &exponent);

   while (base != -1000){
     double res1 = pow(base, exponent);
     double res2 = my_pow(base, exponent);
     printf("pow:    %.4f\n", res1);
     printf("my_pow: %.4f\n", res2);

     printf("\nenter base and power: ");
     scanf("%lf %d", &base, &exponent);
   }
	
    return 0;
}

// this function should be a RECURSIVE function
// i.e., should not use any loops here
double my_pow(double base, double power)
{
     if(power == 0.0){
          return 1.0;
     }

     else{
          if(power > 0.0){
               return (base * my_pow(base, --power));
          }

          else{
               return ((1/base) * my_pow(base, ++power));
          }
     }
}