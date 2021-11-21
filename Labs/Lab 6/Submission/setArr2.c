/***************************************
* EECS2031AC–Lab 6 ** Author: Rahman, Mahfuz *
* Email:  mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #: 217847518 *
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     arr[index] = &i;
}

/**
 * This program outputs only the value 400. It is becasue during the function call
 * all the elements in arr points to the address of variable i. Since, the value of i is changed
 * everytime the function is called, its lastes value stays 400. Hence, all the elements in arr, having pointed to
 * variable i, prints only one value.
 * */