// programme for runningAveLocal()
// your information goes below

#include <stdio.h>


void r_avg(int, int);


int main(int argc, char *argv[])
{
	
      int input; int count=0; int sum=0;
      

      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
          ......
          ......

          r_avg(sum, count);
 	     
          /* reads input again */
	
       }  
	
       return 0;
}

void r_avg(int sum, int count)
{
   ....
   double resu = ..
   printf("running average is ....",  ...);   
}
