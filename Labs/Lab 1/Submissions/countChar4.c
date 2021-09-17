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
  int countLines = 0;
  int countBlank = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 

    if (c == '\n'){
      countLines++;
    }
    else if (c == ' '){
      countBlank++;
      count++;
    }
    else{
      count++;
    }
    
    c = getchar(); /* read next */
  }
  printf("# of chars: %d (# of blank: %d)\n",count, countBlank);
  printf("# of lines: %d\n",countLines);
}