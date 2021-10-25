//your info goes here

#include <stdio.h>
#include <string.h>

#define SIZES 50 
// more headers and the declarations, as needed

int main()
{
   char arr[SIZES]; char arr2[SIZES];
   fgets(arr,SIZES,stdin);
   while ( ... )
   {
       ... // remove the trailing char \n
       
       
       strcpy(arr2, arr);
       
       sortArr(arr);
       printf("%s\n", arr);

       sortArr2(arr2);
       printf("%s\n\n", arr2);

       //read again

    }
   return 0;
}

// sorting functions
