// your info goes here

#include <stdio.h>

..

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


         ....


    }
	
    return 0;
}

// this function should be a RECURSIVE function
// i.e., should not use any loops here
double my_pow(double base, double power)
{

}
