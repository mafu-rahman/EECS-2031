//programme for lab4table2()
//your information goes below


#include <stdio.h>


#define numROWS 20
#define numCOLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[numROWS][numCOLUMNS];
     int current_row=0;
     ....
  	
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // read into table directly. add a \n.  Don't change this line
	 
     while(....)        
     {    
	 /* now may need to 'tokenize' the current input */	    
	 ......



     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
	  ....
	  ....

     return 0;
}

