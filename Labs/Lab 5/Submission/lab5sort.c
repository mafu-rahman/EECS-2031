/***************************************
* EECS2031AC–Lab5 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #:  217847518
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZES 50 
// more headers and the declarations, as needed
void sortArr(char *);
void sortArr2(char *);

int main()
{
   char arr[SIZES]; char arr2[SIZES];
   fgets(arr,SIZES,stdin);
   while ((strcmp(arr, "quit\n")))
   {
      // remove the trailing char \n
      arr[strlen(arr)-1] = '\0';
       
      strcpy(arr2, arr);
       
      sortArr(arr);
      printf("%s\n", arr);

      sortArr2(arr2);
      printf("%s\n\n", arr2);

      //read again
      fgets(arr,SIZES,stdin);
    }
   return 0;
}

// sorting functions
void sortArr(char *c){
   int i, j;
   for(i=0; i<=(strlen(c)-2); i++){
      for(j=(strlen(c)-1); j>=(i+1); j--){
         if(*(c+j) < *(c+(j-1))){
            char swap = *(c+(j-1));
            *(c+(j-1)) = *(c+j);
            *(c+j) = swap;
         }
      }
   }

}

void sortArr2(char *c){
   int i, j;
   char s;

   for(i=0; i<=(strlen(c)-2); i++){
      s = i;
      for(j=i+1; j<=(strlen(c)-1); j++){
         if(*(c+j) < *(c+s)){
            s = j;
         }
      }
      char swap = *(c+i);
      *(c+i) = *(c+s);
      *(c+s) = swap;
   }
}