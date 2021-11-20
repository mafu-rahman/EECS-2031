/* your info here */

// Inputs a list of strings from the keyboard, reorgnize them
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 35
 #define MAX_COLS  50 


 
 main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
 
     /* Read in the lines from the keyboard now, using fgets() */
     ....
     
     while (  )
     {
     
     }
     printf("\n");
     
     // display the array by calling print2D( ..)

     // swap the first and second row here
  
     // call exchange2D() to swap some other rows

     printf("\n== after swapping ==\n");
     
     // display the swapped array by calling print2D() 

	 
     
     return 0;
 }


 // do exchange rows, may have to involve data movement 
 void exchange2D(char p[][MAXCOLS], int n)
 {
 }


 void print2D(char p[][MAXCOLS], int n)
 {
 }                        

