#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 10

int my_atoi(char[], int);
int my_atoi1(char[]);
int power(int, int);
 
int main(){
  int a,b, base;
  char arr [SIZE];

  printf("Enter a word of positive number and base, or 'quit': " );
  scanf("%s %d", arr, &base);

  while(strcmp("quit", arr))
  {
  printf("%s\n", arr);

  a = atoi(arr);
  printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

  b = my_atoi(arr, base);
  printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);
    
  printf("\nEnter a word of positive number and base, or 'quit': " );
  scanf("%s %d", arr, &base);
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* textbook scans from left to right.
 Here you should scan from right to left. This is a little complicated 
 but more straightforward (IMHO) */

int my_atoi1(char c[])
{
  int digit, i, j;
  int p = 0;
  int temp = 0;

  for (i = strlen(c)-1; i >= 0; i--)
  { 
    temp = c[i] - '0';
    digit += power(10, p) * temp; 
    p++;
    temp = 0;
  }
  return digit;;

}

int my_atoi(char c[], int base)
{
  int digit, i;
  int p = 0;
  int temp = 0;

  for (i = strlen(c)-1; i >= 0; i--)
  { 
    temp = c[i] - '0';
    digit += power(base, p) * temp; 
    p++;
    temp = 0;
  }
  return digit;;

}

int power(int b, int p){
  int i, j;
  j = 1;

  if (p != 0)
  {
    for (i = 1; i <= p; i++)
    {
    j = j * b;
    }
  }
  return j;
}