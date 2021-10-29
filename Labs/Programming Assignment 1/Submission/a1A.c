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
  int value;
  int resu[SIZE];
  int i=0, index = 0, sign = 1;

  value = 0;
  c = getchar();
  while ( c != EOF){

    if(c == '-'){
      sign = -1;
    }
    else if(c >= '0' && c <= '9'){
      value = ((value * 10) + (c - '0'));
    }

    else if(c == ' ' || c == '\n'){
      value *= sign;
      resu[index] = value;
      index++;
      value = 0;
      sign = 1;
    }

    c = getchar();

  }
 
  printf("--------\n");
  
  for(i=0; i<index; i++)
    printf("%d\t%d\n", resu[i],resu[i] *2);
 
  return 0;
 
}


