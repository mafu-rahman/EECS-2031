/***************************************
* EECS2031A 21SU - Lab1 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
****************************************/

#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    count++; //include spaces and '\n'

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);

}

