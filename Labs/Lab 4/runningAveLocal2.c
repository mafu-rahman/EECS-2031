// programme for runningAveLocal2()
// your information goes below

#include <stdio.h>

void r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        r_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input); // reads inputs again
    }
	
    return 0;
}

void r_avg(int input)
{
    ......
    double resu = ....
    printf("running average is ..., ...);     
}
