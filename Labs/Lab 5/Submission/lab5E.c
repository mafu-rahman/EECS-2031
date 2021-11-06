/***************************************
* EECS2031AC–Lab5 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #:  217847518
****************************************/

/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUTS 20
 
// more headers and the declarations, as needed
void display(int *);
int largest(int *);

 main(int argc, char *argv[])
 {
     int array[MAX_INPUTS], count;

     /* Input MAX_INPUTS values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
         *(array + count) = i;  // store in array[count] without using []
         count++;
     }
     *(array + count) = -1;


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* display content of an int array */
 void display(int *arr)
 {
     int i;
     for(i=0; (*(arr+i)) != -1; i++){
         printf("%d ", *(arr+i));
     }
 }


/* This Function largest() returns the largest value */
 /* in an int array */

 int largest(int * arr)
 {
     int i, j, l = *arr;
     for(i=0; (*(arr+i)) != -1; i++){
     }

     for(j=0; j<i; j++){
        if(l < *(arr+j)){
            l = *(arr+j);
        }
     }
     return l;
 }