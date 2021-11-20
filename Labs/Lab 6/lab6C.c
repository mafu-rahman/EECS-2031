/* your info here */

#include <stdio.h>
#include <string.h>
#define SIZE 11



main(){

  char * inputs[SIZE] = {"giraffes are high 0", "mosquitos are annoying 1",
  "monkeys are smart 2", "kangaroos are funny 3"};

  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are scary 6";
  char arr4 [] = "fox 7";
  char arr5 [] = "elephants are heavy 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bison 10";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling function printParr()


  // swap pointee of first and second element pointers
  

  // call function exchangeParr() to swap some other 'rows';
  

  printf("\n== after swapping ==\n");   printf("===========================\n");

  // now display the swapped array by calling function printParr()
  
  // display the swapped array again by calling function printParr2()


}

/* exchange pointees of the pointer array */
void exchangeParr(char *pArr[], int n){
}

/* print the first n pointess of the pointer array */ 
void printParr(char *pArr[], int n){
}

/* print the first n pointess of the pointer array, decay */
void printParr2(char **pArr, int n){
}
