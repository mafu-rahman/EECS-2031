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
void display(int *, int);
void largest(int *, int, int *);

 main(int argc, char *argv[])
 {
     int array[MAX_INPUTS], count;

     /* Input MAX_INPUTS values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
         *(array + count) = i;  // store in array[count] without using []
         count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array, count);

     
     int largeNum;
     largest(array, count, &largeNum);
     printf("\nLargest value: %d\n", largeNum);
     
     return 0;
 }
 
 /* display content of an int array */
 void display(int *arr, int index)
 {
     int i;
     for(i=0; i<index; i++){
         printf("%d ", *(arr+i));
     }
 }


/* This Function largest() returns the largest value */
 /* in an int array */

 void largest(int * arr, int index, int *p)
 {
     int i, l = *arr;
     for(i=0; i<index; i++){
         if(l < *(arr+i)){
             l = *(arr+i);
            }
        }
    *p = l;
 }