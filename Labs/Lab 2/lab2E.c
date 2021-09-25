/***************************************
* EECS2031AC – Lab2 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/

#include <stdio.h>
#define MAX_SIZE 

main() {

   char word[MAX_SIZE];
   char c;

   char helloArr[]  = "helloWorld";
   printf("\"%s\" contains %d characters, but the size is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';
   printf("\"%s\" contains %d characters, but the size is %d (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


   /********** Fill in your code here. **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word, &c);

   while ()   
   {  
     // don't change the first two lines
     printf("Input word is \"");
     displayStr(word);
     ....

   }
}

int length(char arr[])
{
}

int indexOf(char arr[], char c)
{
 
}

int occurrence(char arr[], char c)
{

}

void displayStr(char[])
{


}

int isQuit (char arr[])
{
 int i;
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t')
    return 1; 
 else 
    return 0;
}
