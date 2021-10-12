//programme for my_strcat()
//your information goes below

#include<stdio.h>
#include<string.h>

#define SIZES 30


int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);
   while (   ){
    
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);


 
   }
}

//your version of implmentation goes here
void my_strcat(char a[], char b[]){

}
