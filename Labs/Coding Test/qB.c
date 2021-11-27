/***************************************
* EECS2031AC LaBTest  *
* Author: Rahman, Mahfuz*
* Email: mafu@my.yorku.ca *
* EECS_username: mafu *
* York Student #: 217847518 *
****************************************/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define SIZE 5
#define MAXCOLS 15


void print2D(char p[][MAXCOLS], int);
void reverse2D (char p[][MAXCOLS], int);
void sortParr(char *p[], int, int);
void printParr(char **p, int n);
// more declarations as needed
 

int main(int argc, char *argv[]){

  // the 2D array has SIZE rows
  char message[][MAXCOLS] = {"Basic 1", "Abacas 2", "Education 3", "Diligent 4", "Country 5"};
  print2D(message, SIZE);

  printf("\n== after reversing ==\n");
  reverse2D(message, SIZE);
  print2D(message, SIZE);

  // ----------------------------------------------------------
  printf("-----------------------------------------\n");

  char * pArr[] = {"12.3", "1.75", "-2.3", "8.712", "17.1", "6.1", "13.14", "0.21"};
  printParr(pArr, 8);
  printf("\n== after sorting by numerical ==\n");
  sortParr(pArr, 8, 1);
  printParr(pArr, 8);
  printf("\n== after sorting by lexicographic ==\n");
  sortParr(pArr, 8, 0);
  printParr(pArr, 8);

  printf("\n-------------------------\n");
  char * pArr2[]= {"Basic 1", "Abacas 2", "Education 3", "Diligent 4", "Country 5"};
  printParr(pArr2, 5);
  printf("\n== after sorting by lexicographic ==\n");
  sortParr(pArr2, 5, 0); 
  printParr(pArr2, 5);

  printf("-----------------------------------------\n");
  
  printParr(&argv[0], argc);
 
  printf("\n== after sorting argument by lexicographic ==\n");
  sortParr(&argv[0], argc, 0);
  printParr(&argv[0], argc);
   

  return 0;
}


// function that reverses the first n rows of the 2D array
void reverse2D (char p[][MAXCOLS], int n){

  char q[][MAXCOLS] = malloc(sizeof(p));

  int i;

  for(i=0; i<n; i++){
    q[i][0] = p[i][0];
  }

  n--;
  for(i=0; i<n; i++){
    p[n][0] = q[i][0];
    n--;
  }
}

void print2D(char p[][MAXCOLS], int n)
 {
     int count;

     for (count = 0; count < n; count++)
        printf("[%d]: %s\n", count, p[count]);
 }                         


// function that sorts the pointer array, by numerical value, or by lexicographic order
void sortParr(char *p[], int n, int byNumerical){

  int i;
  char *temp = malloc(sizeof(p));

  if(byNumerical == 1){
    float a, b;
    for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){

        sscanf(*p[j], "%f", &a);
        sscanf(*p[i], "%f", &b);

        if(a < b){
          temp = p[i];
          p[i] = p[j];
          p[j] = temp;             
        } 
      }
    }
  }
  else{

    for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
        if((*p[j]) < (*p[i])){
          temp = p[i];
          p[i] = p[j];
          p[j] = temp;             
        }
      }
    }
  }
}


/* function that prints first n pointees of point array p */
void printParr(char **p, int n){
  int i;
  for(i=0; i<n; i++){
    printf("[%d] -*--> %s \n", i, *(p+i));
  }
}