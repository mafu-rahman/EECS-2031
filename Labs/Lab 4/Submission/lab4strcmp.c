//programme for mystrcmp()
//your info goes below
 
#include<stdio.h>
#include<string.h>

#define SIZES 30

int my_strcmp(char[], char[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   
   scanf("%s", a); 
   scanf("%s",b);
    
   while (((strcmp(a, "xxx")) || (strcmp(b, "xxx")))){
      int resu = strcmp(a,b); 
      if (resu < 0) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu > 0) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" are same\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      if (resu2 < 0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (resu2 > 0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);

      scanf("%s", a); 
      scanf("%s",b);
   }
}

// your version of implementation goes here
int my_strcmp(char a[], char b[]){
   int i, l, result;

   if(strlen(a) > strlen(b))
      l = strlen(a);
   else
      l = strlen(b);
   
   for(i=0; i<l; i++){
      if(a[i] < b[i]){
         result = -1;
         return result;
      }
      else if(a[i] > b[i]){
         result = 1;
         return result;
      }
      else if(a[i] == b[i]){
         result = 0;
      }
   }
   return result;
}