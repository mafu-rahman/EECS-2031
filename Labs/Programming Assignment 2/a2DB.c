/* add your info here */
/****************************************
 * EECS203121F –Assigment 2*
 * Author: Rahman, Mahfuz *
 * Email: mafu@my.yorku.ca *
 * eecs_username: mafu *
 * York num: 217847518 *
 ****************************************/

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
   if(!strcmp(c3, "y\n") || !strcmp(c3, "Y\n")){
     init_list(pArr);
   }
}


/* input items into the db */
void enterNew(struct db_type * pArr[SIZE])
{
  struct db_type *temp;
  temp = malloc(sizeof(struct db_type));

  printf("name: ");
  fgets(temp->name, 20, stdin);

  printf("age: ");
  scanf("%d", &temp->age);
  
  printf("high bp: ");
  scanf("%f", &temp->high);
  
  printf("low bp: ");
  scanf("%f", &temp->low);

  getchar();

  int patientFit = 0;
  if(temp->high <= 120 && temp->low <= 80){
    temp->risk = 0.0;
    patientFit = 1;
  }
  else if((temp->high <= 120 && (temp->low-80) <= 10) || ((temp->high-120) <= 10 && temp->low <= 80)){
    temp->risk = 1.0;
  }
  else if(((temp->high-120) <= 10) && ((temp->low-80) <= 10)){
    temp->risk = 2.0;
  }
  else if(((temp->high-120) <= 10) && (((temp->low-80)>10) && ((temp->low-80)<=20))){
    temp->risk = 3.0;
  }
  else if(((temp->low-80) <= 10) && (((temp->high-120)>10) && ((temp->high-120)<=20))){
    temp->risk = 3.0;
  }
  else if( (((temp->low-80)>10) && ((temp->low-80)<=20)) && (((temp->high-120)>10) && ((temp->high-120)<=20))){
    temp->risk = 4.0;
  }
  else{
    temp->risk = 5.0;
  }


  if(temp->age > 50 && !patientFit){
    temp->risk += 0.5;
  }

  int i=0;
  while(pArr[i] != NULL){
    i++;
  }
  pArr[i] = temp;
}


/* remove an existing item from the db */
void removeRecord (struct db_type * pArr[])	
{
  char name[20];
  printf("enter full name to remove: ");
  fgets(name, 20, stdin);

  int i=0, found = 0;

  while(pArr[i] != NULL){
    if(!(strcmp(pArr[i]->name, name))){
      pArr[i] = NULL;
      found = 1;
      break;
    }
    i++;
  }

  if(found){
    do{
      if(i != SIZE-1){
        pArr[i] = pArr[i+1];
      }
    } while (pArr[i++] != NULL);
    
    name[strlen(name)-1] = '\0';
    printf("record [%s] removed successfully.\n", name);
  }
  else{
      printf("record not found\n");
  }
}

/* display all records. Generate output with the same formaing as the sample output 
 use \t to align well
*/
void displayDB(struct db_type * pArr[]){
  
  printf("===============================\n");
  
  int i=0;
  while(pArr[i] != NULL){
    printf("\nname:\t%s", pArr[i]->name);
    printf("age:\t%d\n", pArr[i]->age);
    printf("bp:\t%.2f\t%.2f\n", pArr[i]->high, pArr[i]->low);
    printf("risk:\t%.1f\n\n", pArr[i]->risk);
    i++;
  }

  printf("========== %d records ==========\n", i);
}

/* swap the adjacent records */
void swap(struct db_type * pArr[]){

  struct db_type *temp = malloc(sizeof(struct db_type));
  int i=0;
  while(pArr[i] != NULL){
    i++;
  }

  int j=0;
  while(j<(i-1)){
    temp = pArr[j];
    pArr[j] = pArr[j+1];
    pArr[j+1] = temp;
    j=j+2;
  }
}

 
// sort the record, either by name or risk factor, prompt use for choice
void sort(struct db_type * pArr[])
{
  char c[3];
  printf("sort by name (n) or risk (r)? ");
  fgets(c, 3, stdin);

  int size=0, i=0, j=0;
  double min;
  struct db_type *temp = malloc(sizeof(struct db_type));

  while(pArr[size] != NULL){
     size++; 
    }

  if(!strcmp(c, "n\n") || !strcmp(c, "N\n")){
    for(i=0; i<size-1; i++){
      for(j=i+1; j<size; j++){
        if(strcmp((pArr[j]->name),(pArr[i]->name)) < 0){
          temp = pArr[i];
          pArr[i] = pArr[j];
          pArr[j] = temp;             
        }
      } 
    }
  }

  else if(!strcmp(c, "r\n") || !strcmp(c, "R\n")){

    for(i=0; i<size-1; i++){
      for(j=i+1; j<size; j++){
        if((pArr[j]->risk) < (pArr[i]->risk)){
          temp = pArr[i];
          pArr[i] = pArr[j];
          pArr[j] = temp;             
        }
      } 
    } 
  }
}