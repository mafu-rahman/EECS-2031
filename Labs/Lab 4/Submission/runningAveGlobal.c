//programme for runningAveGlobal()
//your infomation goes below

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