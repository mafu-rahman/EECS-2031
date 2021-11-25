/* Add your info here */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERS_SIZE 50
#define MAX_LEN 35

struct twoInts
{
  int int1;
  int int2;
};

struct node {  // list 'node' struct
   char data;
   struct node *next;
   struct node *prev;
};


void init( );
void display();
// more declarations if needed


struct node * head;   // global variable, the head of the linkedlist

int main()
{
    int i, index; char key;

    struct twoInts * arr[MAX_LEN]; // an array of (unitilized) pionters to structs

    char buffer[BUFFERS_SIZE];
    int value1, value2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFER_SIZE, file) != NULL)     // or  while (fscanf(file, "%d %d", &value1, &value2) == 2)
    {
       sscanf(buffer, "%d %d", &value1, &value2);   // tokenize buffer and store into value1 and value2

        
      // call function malloc() to allocate memory for arr[count]
 
      // set the two fields pointed by arr[count] with value1 and value2
	    
	   
       count++;
    }

    fclose(file);

    /* print the fields of stuctures pointed by the pointer array */
    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, ..., ...);
    }

    // now build up the list by reading from the array of structures
    printf("\n");
    init();

    i=0;
    for(; i< count; i++){
        // read two ints from each structure pointed in the array, sum up and add into the list
        .... 
        insert(....); // no more coding in main 

	printf("insert %c: (%d)", value, len());
        display();
    }

    char removeList [] = {'S','E','-','O','R','K','Y','U','C','\0'}; // \0 is the terminator token
    i=0;
    while ( (key=removeList[i]) != '\0'){
        delete(key);
        printf("remove %c: (%d)", key, len()); display();
        i++;
    }

    // insert again
    char addList [] = "YORKU-CSE"; 
    i=0;
    while ( (key=addList[i]) != '\0'){ 
        insert(key);
        printf("insert %c: (%d)", key, len());
        display();
        i++;
    }

   

    int v = get(0);  printf("\nget(0): %c\n", v);
    v = get(2);  printf("get(2): %c\n", v);
    v = get(3);  printf("get(3): %c\n", v);
    v = get(6);  printf("get(6): %c\n", v);
    v = get(7);  printf("get(7): %c\n", v);
    v = get(8);  printf("get(8): %c\n", v);

    key ='x'; index =2; insertAfter(key,index);
    printf("\ninsert %c after index %d: (%d)\n", key,index,len()); display();
    key ='y'; index = 0; insertAfter(key,index);
    printf("insert %c after index %d: (%d)\n", key,index,len()); display();
    key ='z'; index = 6;insertAfter(key,index);
    printf("insert %c after index %d: (%d)\n", key,index,len()); display();

    v = get(0);  printf("\nget(0): %c\n", v);
    v = get(2);  printf("get(2): %c\n", v);
    v = get(3);  printf("get(3): %c\n", v);
    v = get(6);  printf("get(6): %c\n", v);
    v = get(7);  printf("get(7): %c\n", v);
    v = get(8);  printf("get(8): %c\n", v);

    // search
    printf("\n");
    char searchList [] = "-orkUxyZAy";
    int len = strlen(searchList);
    i=0;
    while ( i < len ){
	char key = *(searchList + i);
        printf("search %c ....  ", key);
        
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
        i++;
  
    }


}

/* Initialize the list. */
void init( )
{
    head = NULL;
}



/* Print the content of the list. */
void display()
{if (head== NULL) {printf("\n");return;}
    struct node *current = head;
    while (current -> next != NULL){
       printf( "%3c", current->data );  
       current = current -> next;    
    } //printf( "\n" );
	printf( "%3c", current->data ); 
	printf( "    <-->  " );
	while (current != NULL){
       printf( "%3c", current->data );  
       current = current -> prev;   
    } printf( "\n" );


}

/* return the length (# of nodes) of the linked list */
int len()
{
     
}

/* get the data at node index */
char get(int index){
     
}

/* search the list for key, return whether or not it is found */
int search (char key)
{
     
}

/* Insert a new data element with key c into the end of the list. */
/* Hint: You may want to consider the special case that the list is empty,
   and the general case that the list is not empty */

void insert(char c )  //  at the end
{
    /* the special case: the list is empty, need to change head  */
    if ( ) { 
       
    }
    else{  

    }
 }

/* insert in the middle.
  insert new node with data c, after the node of index 'index'
  assume the list is not empty, and index is in [0, len()-1]
 */
void insertAfter(char c, int index)   
{
    

}

/* lab version */
/* Remove the node with value c from the list */
/* assume the list is not empty */
/* assume no duplicated keys in the list */
/* assume the node to be deleted is in the list */
/* You do not have to free the space (welcome to do so)  */
void delete(char c)
{
   /* the special case: to be removed is the first, need to change head  */
   if (){
        
    }

   else  // the general case, remove from the middle of the last
    {
          
    }
}

 
