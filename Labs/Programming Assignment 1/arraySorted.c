//add your info here

#include <stdio.h>

/*********  DO NOT CHANGE THESE CONSTANTS IN YOUR FINAL SUBMISSION *********/

#define MAX_SIZE 20
#define SUCCESS 0

/******************  YOUR CODE STARTS HERE ******************/
/************************************************************/
/* 
   Input: array A with "size" elements and an integer d
   Output: d is added to the array.
   Return a non-negative number if the addition is successful.
   Return a negative number if the addition is unsuccessful.
   Unsucessful condition(s): A reaches the MAX_SIZE already.
 */
 
int myAdd( int A[], int * size, int d )
{
   /* ADD YOUR CODE HERE */
}


/* 
   Input: array A with "size" elements and an integer d
   Output: If d is found in the array, return the index of the cell containing d.
   Otherwise return a negative number if d is not found.
   Assume no duplicate values in the array.
   Your should implement nlg(n) binary searching algorithm.
 */
 
int myBinarySearch( int A[], int size, int d )
{
   /* ADD YOUR CODE HERE */ 

}

/* 
   Input: array A with "size" elements and an integer d
   Output: Return a negative number if d is not found.
   Otherwise d is removed from the array and return a non-negative number.
   Assume no duplicate values in the array.
 */

int myRemove( int A[], int *size, int d )
{
   /* ADD YOUR CODE HERE */
}


/*******************  YOUR CODE ENDS HERE *******************/
/************************************************************/

/*********  DO NOT CHANGE ANYTHING BELOW THIS LINE IN YOUR FINAL SUBMISSION *********/

/* 
   Input: array A with "size" elements
   Output: Display the array on the standard output with one space between every two numbers. 
   Print a new line after the last element.
 */

int printArray( int A[], int size )
{
  int i; 
  printf("[ ");
  for ( i = 0; i < size; i++ )
     printf("%d ", A[ i ] );
  printf( "]\n" );
  return 0;
}

/* main() function 
 */
int main()
{
 int myArray[MAX_SIZE];
 int retCode, data, size;
 char action;
 char a[20];
 size = 0;
 do {
    fgets(a, 20, stdin);
    sscanf(a, "%c %d", &action, &data ); 
 
  switch( action )
  {
    case 'a': /* add */
    case  'A':
      retCode = myAdd( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to add %d.\n", data );  
      break; 
        
    case 'r': /* remove */
    case 'R':
      retCode = myRemove( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to remove %d.\n", data );    
      break;  
                    
    case 's': /* search */
    case 'S':
      retCode = myBinarySearch( myArray, size, data );
      if( retCode >= 0 )
        printf( "Found %d at index %d.\n", data, retCode );
      else 
        printf( "Not found %d.\n", data );        
      break;
      
    case 'q':  /* quit */
    case 'Q':
      /* To quit, enter an arbitrary integer and character (action) 'q' or 'Q'.
         This is not elegant but makes the code simpler.  */  
      /* Do nothing but exit the switch statement */
      break; 
    
    default:
      printf( "Invalid operation %c\n", action );  
  }
 } while ( action != 'q' && action != 'Q' );

 return 0; 
} // end main
