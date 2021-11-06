/***************************************
* EECS2031AC–Lab5 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #:  217847518
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZES 40

//... more headers and the declarations, as needed
void printReverse(char *);
int isPalindrome (char * );
int isPalindromeR(char * );

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZES];
  
   fgets(arr,SIZES,stdin);

   while ((strcmp(arr, "quit\n")))
   {
      // remove the trailing \n
      int i=0;
      for(i=0; arr[i] != '\n'; i++){
      }
      arr[i] = '\0';
      
	  // print backward
      printReverse(arr);
   
      if (isPalindrome (arr))
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZES,stdin);
    }
    return 0;
}


// assume that the \n has already been removed manually
int isPalindrome (char * str)
{
   int i,j;
   for(i=0; *(str+i) != '\0'; i++){
   }
   i--;

   for(j=0; j <= (i/2); j++){
      if(*(str+j) != *(str+i))
         return 0;
      i--;
   }

   return 1;
}

// assume that the \n has as already been removed manually
void printReverse(char * str)
{
   int i=0;
   for(i=0; *(str+i) != '\0'; i++){
   }

   i--;

   printf("%d %d", i, (strlen(str)));

   for(i; *(str+i) != '\0'; i--){
      printf("%c", *(str+i));
   }
}

int isPalindromeR (char * str){
   int i=0;
   for(i=0; *(str+i) != '\0'; i++){
   }
   i--;

   if(i == 0)
      return 1;

   else if(*(str) != *(str+i))
      return 0;
   
   else{
      *(str+i) = '\0';
      str = &(*(str+1));
      return isPalindrome(str);
   }
}