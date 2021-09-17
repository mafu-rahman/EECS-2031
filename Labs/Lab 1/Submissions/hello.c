/***************************************
* EECS2031AC 21F – Lab1 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
****************************************/

#include <stdio.h>

main(){
    printf("Please enter the number: ");
    int a; int b; int c;
    scanf("%d",&a);

    b = a*2;
    c = a*3;

    printf("Hi, input is %d. Double and triple of %d is %d and %d, respectively\n" ,a,a,b,c);
}