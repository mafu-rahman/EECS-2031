/***************************************
* EECS2031AC – Lab2 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
************************************** **/

#include <stdio.h>

isDigit(char c){
    if (c>=48 && c<=57)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

int main(){

    char c;
    c = getchar();
    int n;

    int a[] = {0,0,0,0,0,0,0,0,0,0,0};

    while (c != EOF)
    {
        if (isDigit(c))
        {
            n = c - '0';
            a[n]++; 
        }
        
        else{
            a[10]++;
        }
        c= getchar();
    }

    int i;
    for (i = 0; i < 11; i++)
    {
        if (i<10)
        {
            printf("%d: %d\n", i, a[i]);
        }
        else{
            printf("X: %d\n", a[i]);
        }
        
        
    }
    return 0;
}