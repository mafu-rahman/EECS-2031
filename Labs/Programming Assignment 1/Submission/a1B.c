/***************************************
* EECS2031AC – Lab4 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York num: 217847518 *
****************************************/


#include <stdio.h>
#define SIZE 40    // assume that not more than 40 literals in the input
int main(){
 
  int c;
  float value;
  float resu[SIZE];
  int i=0, index = 0, dot = 0;

  value = 0.0;
  c = getchar();
  while ( c != EOF){

    if(c == '.'){
        dot++;
    }
    
    else if(c >= '0' && c <= '9'){
        if(dot)
            dot++;
        value = ((value * 10.0) + (1.0*(c - '0')));
    }

    else if(c == ' ' || c == '\n'){
        for(i=1; i<dot; i++){
            value = value/(10.0);
        }
        resu[index] = value;
        index++;
        value = 0;
        dot = 0;
    }

    c = getchar();

  }
 
  printf("--------\n");
  
  for(i=0; i<index; i++)
    printf("%.4f\t%.4f\n", resu[i],resu[i] *2);
 
  return 0;
 
}


