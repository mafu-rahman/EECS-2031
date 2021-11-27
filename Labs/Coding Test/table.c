/***************************************
* EECS2031AC LaBTest  *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* EECS_username: mafu *
* York Student #: 217847518 *
****************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
//more header files and declarations as needed

#define ROWs 40
#define COLs 45


int main(int argc, char *argv[])
{
     char table[ROWs][COLs];  /* 2D array to store lines of inputs */
        
     char message[50];
     char word1[20];
     char word2[20];
     char newWord[20];
     char letter;

     int index=0, i=0;

     float rate;

	
     printf("Enter rate~~word1 letter word2: ");
     fgets(message,  COLs,   stdin);   // use fgets() to read in whole line. You can move this line into loop if you want. 


     while ((strcmp(message, "done\n"))){
           table[index][0] = message;
           index++;

           sscanf(message, "%f~~%s %c %s\n", &rate, word1, &letter, word2);

           for(i=0; i<strlen(word1); i++){
                 word1[i] = word1[i] + 1; 
           }

            
           for(i=0; i<strlen(word1); i++){
                 if(word1[i] == letter){
                       newWord[i] = '*';
                 }
                 else{
                       newWord[i] = word1[i];
                 }
           }

           rate = rate + (0.7 * rate);

            char compare[3];
           if(strcmp(word1, word2) > 0){
                 strcpy(compare, ">>");
           }
           else if(strcmp(word1, word2) < 0){
                 strcpy(compare, "<<");
           }

           char modify[45];

           sprintf(modify, "%s--%s--[%.4f...%d...%d] %s", word1, newWord, rate, floor(rate), ceil(rate), compare);
           table[index][0] = modify;
           index++;

           table[index][0] = "xxxx";
           index++;

            printf("Enter rate~~word1 letter word2: ");
            fgets(message,  COLs,   stdin);

            
     }

     /* now outputs number of rows stored in the table  */
     printf("\nTotally %d rows are stored\n", index);
           

     /* finally outputs the stored rows of the table */
       for(i=0; i<index; i++){
            printf("[%d]: %s\n", table[i][0]);
       }  
	
       return 0;
}

