//your info goes here

/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUTS 20
 
// more headers and the declarations, as needed

 main(int argc, char *argv[])
 {
     int array[MAX_INPUTS], count;

     /* Input MAX_INPUTS values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        ....  // store in array[count] without using []
        count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* display content of an int array */
 void display(int *arr)
 {
 }


/* This Function largest() returns the largest value */
 /* in an int array */

 int largest(int * arr)
 {
 }

