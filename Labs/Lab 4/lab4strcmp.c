//programme for mystrcmp()
//your info goes below
 
#include<stdio.h>
#include<string.h>

#define SIZES 30

int main(){
   char a[SIZES];
   char b[SIZES];
   
   scanf("%s", a); 
   scanf("%s",b);
    
   while (     ){
      int resu = strcmp(a,b); 
      if (  ) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (  ) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" are same\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      if (  ) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (  ) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);


   }
}

// your version of implementation goes here
int my_strcmp(char a[], char b[]){

}
