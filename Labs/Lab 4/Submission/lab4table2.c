//programme for lab4table2()
/***************************************
* EECS2031AC – Lab4 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York num: 217847518 *
****************************************/


#include <stdio.h>
#include <string.h>


#define numROWS 20
#define numCOLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[numROWS][numCOLUMNS];
     int current_row=0;

     char name[10];
     int age, i;
     float rate;
  	
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // read into table directly. add a \n.  Don't change this line

     sscanf(input_table[current_row], "%s %d %f", name, &age, &rate);

     while (strcmp(name, "xxx"))
     {    
	 /* now may need to 'tokenize' the current input */

          for(i=0; i<strlen(name); i++){
               if(name[i] >= 97 && name[i] <= 122)
                    name[i] -= 32;
          }

          age += 10;
          rate += (rate/2.0);

          current_row++;
          sprintf(input_table[current_row], "%s %d %.2f \n", name, age, rate); 
        
          /* now read inputs again by using scanf(%s %s %s) */ 

          printf("Enter name, age and rate: ");
          current_row++;
          fgets(input_table[current_row], 30, stdin);


          sscanf(input_table[current_row], "%s %d %f", name, &age, &rate);

     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);

     /* now display the input_table row by row */
	for(i=0; i<current_row; i++){
          printf("row[%d]: %s", i, input_table[i]);
     }

     return 0;
}

