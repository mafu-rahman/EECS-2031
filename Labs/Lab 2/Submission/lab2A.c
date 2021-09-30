/***************************************
* EECS2031AC – Lab2 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
************************************** **/

#include <stdio.h>

isDigit(char c);
isLetter(char c);
isOperator(char c);

int main(){
    while (1)
    {
        int num; char c;
        printf("Enter an integer and a character separated by blank: ");
        
        scanf("%d %c", &num, &c);

        if (num == -10000)
        {
            break;
        }

        if (isLetter(c))
        {
            printf("Character '%c' represent a letter\n", c);    
        }

        else if (isDigit(c))
        {
            int num2 = c - '0';
            printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", c, num, c, (num+num2));
        }

        else if (isOperator(c))
        {
            printf("Character '%c' represents an operator\n", c);   
        }

        else{
            printf("Character '%c' represents others\n", c);   
        }

        printf("\n");
    }

    return 0;
}

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

isLetter(char c){
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

isOperator(char c){
    if ((c == '+') || (c == '-') || (c == '*') || (c == '/') || (c == '%'))
    {
        return 1;
    }
    else{
        return 0;
    }
    
}