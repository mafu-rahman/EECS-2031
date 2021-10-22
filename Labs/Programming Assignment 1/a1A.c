//add your info below


#include <stdio.h>
#define SIZE 40    // assume that not more than 40 literals in the input
int main(){
 
  int c;
  int value;
  int resu[SIZE];
  int index = 0;

  c = getchar();
  while ( c != EOF){ 
  
    if (c >= '0' && c <= '9')
    { 
         resu[index] = c;
         index++;
         resu[index] = c;
         index++;
    }  

   
  }
 
  printf("--------\n");
  
  for(i=0, ....)
    printf("%d\t%d\n", resu[i],resu[i] *2);
 
  return 0;
 
}


