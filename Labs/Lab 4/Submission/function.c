#include <stdio.h>

// define global variables and a function
int sum, count;
double resu;

void r_avg (void)
{
    resu = (double) sum / count;
    printf("running average is %d / %d = %.3f\n",  sum, count, resu);
}