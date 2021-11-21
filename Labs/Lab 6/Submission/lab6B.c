/* your info here */
/***************************************
* EECS2031AC–Lab 6 ** Author: Rahman, Mahfuz *
* Email:  mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #: 217847518 *
****************************************/

// Inputs a list of strings from the keyboard, reorgnize them
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 30
 #define MAX_COLS  50 

void exchange2D(char p[][MAX_COLS], int);
void print2D(char p[][MAX_COLS], int);

 
main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
 
     /* Read in the lines from the keyboard now, using fgets() */
     int n=0;
     printf("Enter string: ");
     fgets(inputs[n], MAX_COLS, stdin);
     while (strcmp("xxx\n", inputs[n]))
     {
     n++;
     printf("Enter string: ");
     fgets(inputs[n], MAX_COLS, stdin);
     }
     printf("\n");

     
     // display the array by calling print2D( ..)
     print2D(inputs, n);

     // swap the first and second row here
     char temp[MAX_COLS];
     strcpy(temp, inputs[0]);
     strcpy(inputs[0], inputs[1]);
     strcpy(inputs[1], temp);
  
     // call exchange2D() to swap some other rows
     exchange2D(inputs, n);

     printf("\n== after swapping ==\n");
     
     // display the swapped array by calling print2D() 
     print2D(inputs, n);
	 
     
     return 0;
 }


 // do exchange rows, may have to involve data movement 
 void exchange2D(char p[][MAX_COLS], int n)
 {   
     int i;
     char temp[MAX_COLS];
     for(i=2; i<(n-1); i=i+2){
         strcpy(temp, p[i]);
         strcpy(p[i], p[i+1]);
         strcpy(p[i+1], temp);
         
     }
 }


void print2D(char p[][MAX_COLS], int n)
{
    int i;
    for(i=0; i<n; i++){
        printf("[%d]: %s", i, p[i]);
    }
}