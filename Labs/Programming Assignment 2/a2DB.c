/* add your info here */

#include <stdio.h>
#include <ctype.h>  // for tolower
#include <string.h>
#include <stdlib.h>

#define SIZE 30
#define fieldLength 200

#define optimalH 120
#define optimalL 80
 

struct db_type
{
   char name[fieldLength];
   
   int age;

   float high;
   float low;
   float risk;
};

 

char prompt_menu(void);
void enterNew(struct db_type * pArr[]);  
void init_list(struct db_type * pArr[]); 
void displayDB(struct db_type * pArr[]);   
void sort(struct db_type * pArr[]);
void swap(struct db_type * pArr[]); 
void removeRecord(struct db_type * pArr[]);
void clearDB(struct db_type * pArr[]);



int main(int argc, char *argv[])
{
    
    struct db_type * db_pArr[SIZE];  // main db storage

    init_list(db_pArr);  // set to NULL
    
    char choice;
    for(; ;){
      choice = prompt_menu();
      switch (choice)
      {
         case 'n': enterNew(db_pArr); break;
         case 'd': displayDB(db_pArr); break;
        
         case 's': sort(db_pArr); break;
	   
         case 'c': clearDB(db_pArr); break;  
        
         case 'p': swap(db_pArr); break;
         case 'r': removeRecord(db_pArr);break;
         
         case 'q': exit(1); // terminate the whole program
       }
	
     }
     return 0;
}


char prompt_menu(void){
  char s[80];
  while(1){
    printf("\n-----------------------------------------------------------------\n");
    printf("|    %-20s","(N)ew record");
    printf("%-20s","(R)emove record");
    printf("Swa(p) records\t|\n");
    printf("|    %-20s","(S)ort database");
    printf("%-20s","(C)lear database");
    printf("(D)isplay db\t|\n");
  
   // printf("|    %-20s","(L)oad disk");
   // printf("%-20s","(W)rite disk");
   // printf("(E)mpty disk\t|\n");
  
   
    printf("|    %-20s","(Q)uit");
    printf("*Case Insensitive*\t\t\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("choose one: ");
  
    fgets(s,50, stdin); // \n added
    //scanf("%s", s);  
    if (strlen(s) == 2 && strchr("edlsuqrcwnvpr", tolower(*s))) 
       return tolower(*s); // s[0], return the first character of s  
    //else
    printf("not a valid input!\n");
	 
 }
}


void init_list(struct db_type * pArr[]){
  int t;
  for (t=0; t<SIZE; t++)
  { 
     pArr[t]= NULL;
  }
}

void clearDB(struct db_type * pArr[]){
   char c3[3];
   printf("are you sure to clear db? (y) or (n)? ");
    
   fgets(c3,3,stdin);
   
   // complete the function by calling init_list();
   ;
}


/* input items into the db */
void enterNew(struct db_type * pArr[SIZE])
{
    ;
}


/* remove an existing item from the db */
void removeRecord (struct db_type * pArr[])	
{
  ;

}

/* display all records. Generate output with the same formaing as the sample output 
 use \t to align well
*/
void displayDB(struct db_type * pArr[]){
  
  printf("===============================\n");
  
 
}

/* swap the adjacent records */
void swap(struct db_type * pArr[]){
   
    ;
	 
} 

 
// sort the record, either by name or risk factor, prompt use for choice
void sort(struct db_type * pArr[])
{
 
  printf("sort by name (n) or risk (r)? ");
  
}

