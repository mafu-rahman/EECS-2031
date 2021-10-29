//programme for lab4table1()
/***************************************
* EECS2031AC – Lab4 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York num: 217847518 *
****************************************/

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
    
    int age, row=0, i;
    float rate;

    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
       
    while (strcmp(name, "xxx"))        
    {
        sscanf(ageS, "%d", &age);
        sscanf(rateS, "%f", &rate);

        sprintf(inputs_table[row], "%s %s %s", name, ageS, rateS);
        row++;
        
        for(i=0; i<strlen(name); i++){
            if(name[i] >= 97 && name[i] <= 122)
                name[i] -= 32;
        }

        age += 10;
        rate += (rate/2.0);

        sprintf(inputs_table[row], "%s %d %.2f", name, age, rate);
        row++;
        
       /* now read inputs again by using scanf(%s %s %s) */ 
        printf("Enter name, age and rate: ");
        scanf("%s %s  %s", name, ageS, rateS); 
           
    }
    
    printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */      
	for(i=0; i<row; i++){
        printf("row[%d]: %s\n", i,inputs_table[i]);
    }

    return 0;
}