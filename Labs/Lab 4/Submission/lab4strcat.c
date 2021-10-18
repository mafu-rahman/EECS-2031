//programme for my_strcat()
//your information goes below

#include<stdio.h>
#include<string.h>

#define SIZES 30

void my_strcat(char[], char[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);

   while (((strcmp(a, "xxx")) || (strcmp(b, "xxx")))){
    
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);

      scanf("%s",a);
      scanf("%s",b);
   }
}

//your version of implmentation goes here
void my_strcat(char a[], char b[]){
   int i, j=0;
   for(i=0; i<SIZES; i++){
      if((a[i] == '\0') || j != 0 ){
         a[i] = b[j];
         j++;
      }
   } 
}