/***************************************
* EECS2031AC – Lab2 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
************************************** **/

#include <stdio.h>
#define MAX_SIZE 20

int length(char word[]);
int indexOf(char word[], char c);
int occurrence(char word[], char c);
void displayStr(char word[]);
int isQuit (char arr[]);

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

   while (isQuit(word))   
   {  
      // don't change the first two lines
      printf("Input word is \"");
      displayStr(word);
     
      printf("Contains %d characters\n", length(word));
      
      printf("\'%c\' appears %d times in the word\n", c, occurrence(word, c));

      printf("Index of \'%c\' in the word is %d\n", c, indexOf(word, c));

      printf("\nEnter a word and a character separated by blank: ");
      scanf("%s %c", word, &c);
   }
}

int length(char word[])
{
   int count = 0;
   char c;
   int i;
   for (i = 0; i < MAX_SIZE; i++)
   {
      c = word[i];
      if (c >= 33 && c <= 126)
      {
         count++;
      }
      else if(c == '\0')
      {
         return count;
      }
   }
   return count;
}

int indexOf(char word[], char c)
{
   int i;
   int index;
   for (i = 0; i < length(word); i++)
   {
      if (word[i] == c)
      {
         return i;
      }
      else
      {
         index = -1;
      }
   }
   return index;
}

int occurrence(char word[], char c)
{
   int i;
   int count = 0;
   for (i = 0; i < MAX_SIZE; i++)
   {
      if (word[i] == c)
      {
         count++;
      }
   }
   return count;
}

void displayStr(char word[])
{
   int i;
   for (i = 0; i < length(word); i++)
   {
      putchar(word[i]);
   }
   putchar('\"');
   putchar('\n');
}

int isQuit (char arr[])
{
 int i;
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t')
    return 0; 
 else 
    return 1;
}