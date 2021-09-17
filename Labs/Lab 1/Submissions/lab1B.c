/***************************************
* EECS2031AC 21F – Lab1 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
****************************************/

#include <stdio.h>

main(){
    printf("Enter month, day and year separated by spaces: ");

    int m, d, y;

    scanf("%d %d %d", &m, &d, &y);

    printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", m,d,y,y,m,d,y,m,d);
}