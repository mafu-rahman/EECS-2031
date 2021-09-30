#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{

	printf("size of char %d\n", sizeof(char));
        printf("size of unsigned char %d\n", sizeof(unsigned char));
        printf("size of signed char %d\n\n", sizeof(signed char));

	printf("size of short int %d\n", sizeof(short int));
	printf("size of unsigned short int %d\n\n", sizeof(unsigned short int));

        printf("size of int %d\n", sizeof(int));
	printf("size of unsigned int %d\n\n", sizeof(unsigned int));
	
	printf("size of long int %d\n", sizeof(long int));
	printf("size of unsigned long int %d\n\n", sizeof(unsigned long int));



        printf("size of float %d\n", sizeof(float));
	printf("size of double %d\n", sizeof(double));
	printf("size of long double %d\n\n", sizeof(long double));
	
        printf("size of long long int %d\n", sizeof(long long));
        printf("size of unsigned long long int %d\n", sizeof(unsigned long long));

        printf("int_min and int_max:%d  %d\n", INT_MIN, INT_MAX);
        printf("pointer %d\n", sizeof(void*));

	return 0;
}

