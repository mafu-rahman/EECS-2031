// your info goes here

#include <stdio.h>

#define SIZES 40

//... more headers and the declarations, as needed

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZES];
  
   fgets(arr,SIZES,stdin);
   while (    )
   {
      ... // remove the trailing \n
      
	  // print backward
      printReverse(arr);
   
      if (isPalindrome (arr)) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      ...
    }
    return 0;
}


// assume that the \n has already been removed manually
int isPalindrome (char * str)
{

}

// assume that the \n has as already been removed manually
void printReverse(char * str)
{

}

