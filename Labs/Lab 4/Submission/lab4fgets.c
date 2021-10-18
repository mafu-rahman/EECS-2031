// program for lab4fgets()
// your information goes below

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SIZES 10
#define SIZES2 40

int main(int argc, char *argv[])
{
    char resu[SIZES2];
    char input[SIZES2];    
    char name[SIZES];  
    int age;
    float rate;
    int rfloor, rceil;
	
    printf("Enter name, age and rate (or \"exit\"): ");
    fgets(input, 40, stdin);

    while (strcmp(input, "exit\n"))
    {    
    //output original input using two functions.
    printf("%s", input);  // no \n is needed 
    fputs(input, stdout); 

    sscanf(input, "%s %d %f", name, &age, &rate);

    if(name[0] >= 97 && name[0] <= 122)
       name[0] -= 32;
    age += 10;
    rate *= 2.0;

    rfloor = floor(rate);
    rceil = ceil(rate);

    sprintf(resu, "%s-%d-%.3f-[%d,%d]\n", name, age, rate, rfloor, rceil);
    printf("%s", resu);

    /* now use fgets to read inputs again */
    printf("\nEnter name, age and rate (or \"exit\"): ");
    fgets(input, 40, stdin);

    } 
      return 0;
}