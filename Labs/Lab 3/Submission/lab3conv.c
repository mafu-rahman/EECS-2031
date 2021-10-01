/***************************************
* EECS2031AC – Lab3 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
************************************** **/

#include <stdio.h>

float fun_IF(int, char, float);
float fun_II(int, char, int);
float fun_FF(float, char, float);

main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;
 
 float a = 9/2;
 float b = 9*1.0/2;  // force 9 to be converted before /
 float c = 9/2*1.0;  // force 2 to be converted before /, but not working
 float c2 = 9/(2*1.0); // force 2 to be converted before /  
 float d = (float)9/2;  // cast 9 before /
 float e =  9/(float)2; // cast 2 before /
 float f = (float) (9/2); // cast after /, nope
 printf("9/2=%f  9*1.0/2=%f  9/2*1.0=%f   9/(2*1.0)=%f\n\n", a, b, c, c2);
 printf("(float)9/2=%f  9/(float)2=%f  (float)(9/2)=%f\n\n", d, e, f);
  
 // conversion in arithemetic
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);
 
 // conversion in assignment
 float f2  = 3.96;
 float f3 = 3.03;
 int i = f2; int j = f3;
 printf("i: %d  j: %d\n", i, j);

 //---------------------------------------
 printf("Enter operand_1 operator operand_2 separated by blanks> ");
 scanf("%d %c %f", &op1, &operator, &op2);  

 while(op1 != -1){
     printf("%f (fun_IF)\n", fun_IF(op1, operator, op2));
     printf("%f (fun_II)\n", fun_II(op1, operator, op2));
     printf("%f (fun_FF)\n", fun_FF(op1, operator, op2));

     printf("\nEnter operand_1 operator operand_2 separated by blanks> ");
     scanf("%d %c %f", &op1, &operator, &op2); 
    }
}
 
float fun_IF(int op1, char operator, float op2)
{
    if(operator == '+'){
        return op1 + op2;
    }
    else if(operator == '-'){
        return op1 - op2;
    }
    else if(operator == '*'){
        return op1 * op2;
    }
    else if(operator == '/'){
        return op1 / op2;
    }
}

float fun_II(int op1, char operator, int op2)
{
    if(operator == '+'){
        return op1 + op2;
    }
    else if(operator == '-'){
        return op1 - op2;
    }
    else if(operator == '*'){
        return op1 * op2;
    }
    else if(operator == '/'){
        return op1 / op2;
    }
}

float fun_FF(float op1, char operator, float op2)
{
    if(operator == '+'){
        return op1 + op2;
    }
    else if(operator == '-'){
        return op1 - op2;
    }
    else if(operator == '*'){
        return op1 * op2;
    }
    else if(operator == '/'){
        return op1 / op2;
    }  
}

/**
 * fun_IF performs operation on an int and float parameter. So the result gets converted to a float and since the return type 
 * is a float it matches with the result and returns the exact result.
 * fun_FF performs operation on both float parameters. So the result is already a float and thus, it returns float which makes
 * it as the same answer as fun_IF.
 * 
 * On the other hand, fun_II performs operation on both int parameters so the result is an int value with the floating point being
 * truncated, but since the return type is float, the result which is already calculated as an int, gets converted to float 
 * and gets returned as float. 
 */

