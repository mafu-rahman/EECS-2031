//programme for runningAveGlobal()
/***************************************
* EECS2031AC – Lab4 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York num: 217847518 *
****************************************/

extern int sum;
extern int count;

int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
      sum += input;
      count++;
      
      r_avg();

      // reads inputs again
      printf("\nEnter number (-1 to quit): ");
      scanf("%d", &input);
	
     }
	 
     return 0;
}