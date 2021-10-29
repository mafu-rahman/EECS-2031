/***************************************
* EECS2031AC – Lab4 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York num: 217847518 *
****************************************/

#include <stdio.h>

// define global variables and a function
int sum, count;
double resu;

void r_avg (void)
{
    resu = (double) sum / count;
    printf("running average is %d / %d = %.3f\n",  sum, count, resu);
}