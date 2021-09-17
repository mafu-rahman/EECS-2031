/***************************************
* EECS2031AC 21F – Lab1 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
****************************************/

#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
  int count_a = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    count++;

    if (c == 'a')
    {
      count_a++; //include spaces and '\n'
    }
    
    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  printf("# of char 'a': %d\n",count_a);

}