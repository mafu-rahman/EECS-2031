/***************************************
* EECS2031AC – Lab3 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
************************************** **/

#include <stdio.h>

int isLeap(int);
int countDays(int, int, int);

int main(){

    int year, month, day, elapsedDays;

    printf("Enter date (\'YYYY MM DD\'): ");
    scanf("%d %d %d", &year, &month, &day);

    while( year > -1){

        elapsedDays = countDays(month, day, isLeap(year));

        if (isLeap(year)){
            printf("%d days of year %d have elapsed [leap year]\n", elapsedDays, year);
        }
        else{
            printf("%d days of year %d have elapsed\n",  elapsedDays, year);
        }

        printf("\nEnter date (\'YYYY MM DD\'): ");
        scanf("%d %d %d", &year, &month, &day);

        
    }
    return 0;
}

int isLeap(int year){
    if(year%4 == 0 && year%100 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int countDays(int month, int day, int isLeap){

    int i,j;
    int monthDays;
    int elasped = day;  // counted the number of days in present month
    month--;

    for(month; month>0; month--){   //counting number of days backwards from the previous month since present month days are counted already
        if(month<=7){
            if(month%2==0 && month != 2){   // months with odd number have 31 days before July (7) excluding February
                for(j=1; j<=30;j++)
                    elasped ++;
            }
            else if(month%2==1 && month != 2){
                for(j=1; j<=31;j++)
                    elasped++;
            }
            else{   // counting days for February
                if(isLeap){
                    for(j=1;j<=29;j++)
                    elasped++;
                }
                else{
                    for(j=1;j<=28;j++)
                    elasped++;
                }
            }
        }

        else if(month>7){   
            if(month%2==0 && month != 2){   // months with odd number have 30 days after July(7) excluding February
                for(j=1; j<=31;j++)
                    elasped ++;
            }
            else if(month%2==1 && month != 2){
                for(j=1; j<=30;j++)
                    elasped++;
            }
        }
    }  
    return elasped; 
}