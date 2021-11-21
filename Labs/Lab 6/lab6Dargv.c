/***************************************
* EECS2031AC–Lab 6 ** Author: Rahman, Mahfuz *
* Email:  mafu@my.yorku.ca *
* eecs_num: mafu *
* Yorku #: 217847518 *
****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getSum(char *[], int);
int getDiff(char *[], int);


int main(int argc, char *argv[]){
    int i;
    printf("There are %d arguments (excluding \"a.out\")\n", argc);
    if(strcmp(argv[1], "sum") == 0){
        for(i=2; i<argc; i++){
            if(i == (argc-1))
                printf("%s\n", *(argv+i));
            else
                printf("%s + ", *(argv+i));
        }
        printf("= %d\n", getSum(argv, argc));
    }
    else if(strcmp(argv[1], "diff") == 0){
        for(i=2; i<argc; i++){
            if(i == (argc-1))
                printf("%s\n", *(argv+i));
            else
                printf("%s - ", *(argv+i));
        }
        printf("= %d\n",getDiff(argv, argc));
    }
    return 0;
}

int getSum(char *p[], int n){
    int i, sum = 0;
        for(i=2; i<n; i++){

            sum += atoi((*(p+i)));
        }
    return sum;
}

int getDiff(char *p[], int n){
    int i;
    int diff = atoi(*(p+2));
        for(i=3; i<n; i++){
            diff -= atoi((*(p+i)));
        }
    return diff;
}