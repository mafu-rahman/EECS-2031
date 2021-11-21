/* add your info here */
/***************************************
* EECS2031AC–Lab 6 ** Author: Rahman, Mahfuz *
* Email:  mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #: 217847518 *
****************************************/

#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);
int leng();
int get(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");

   printf("len: %d\n", leng() );
   printf("get(0): %d\n", get(0));
   printf("get(1): %d\n", get(1));
   printf("get(3): %d\n", get(3));

}   

/* insert at the begining */
void insertBegining(int dat){
   struct node *newNode = malloc(sizeof(struct node));
   (*newNode).data = dat;

   (*newNode).next = head;
   
   head = newNode;

}

/*  'length' of the list */
int leng(){ 
    int i = 0; 
    struct node * cur;
    for(cur= head; cur != NULL; cur= cur->next)
        i++;
   return i;
}

/* get value at index index */
int get(int index){
    struct node * cur;
    int i;
    cur= head;
    for(i=0; i<index; i++){
        cur= cur->next;
    }
        
   return cur->data;
}