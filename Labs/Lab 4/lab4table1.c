//programme for lab4table1()
//your information goes below

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

 
#define numROWS 20
#define numCOLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table [numROWS][numCOLUMNS];
    char name[10]; char ageS[10]; char rateS[10];
    ...
		
    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
       
    while (....)        
    {  
	   
	.....
          

       /* now read inputs again by using scanf(%s %s %s) */ 
           
    }
    
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */      
	......
	......

     return 0;
}

