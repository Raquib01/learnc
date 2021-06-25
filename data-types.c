#include<stdio.h>
int main(void){
/*
Data Types
1. Primitive data types
2. Derived data types: array, pointer, structure and union
3. enumeration
4. void
*/
	printf("Following are the primitive data types in C and their size according to 64-bit architecture\n");

	printf(">signed int\n");
	printf(" Format Specifier: %%d\n");
	printf(" Size: %ldbit\n\n",sizeof(signed int)*8);

	printf(">unsigned int\n");
	printf(" Format Specifier: %%u\n");
	printf(" Size: %ldbit\n\n",sizeof(unsigned int)*8);

	printf(">signed short int\n");
	printf(" Format Specifier: %%hd\n");
	printf(" Size: %ldbit\n\n",sizeof(signed short int)*8);

	printf(">unsigned short int\n");
	printf(" Format Specifier: %%hu\n");
	printf(" Size: %ldbit\n\n",sizeof(unsigned short int)*8);

	printf(">signed long int\n");
	printf(" Format Specifier: %%ld\n");
	printf(" Size: %ldbit\n\n",sizeof(signed long int)*8);

	printf(">unsigned long int\n");
	printf(" Format Specifier: %%lu\n");
	printf(" Size: %ldbit\n\n",sizeof(unsigned long int)*8);

	printf(">signed char\n");
	printf(" Format Specifier: %%c\n");
	printf(" Size: %ldbit\n\n",sizeof(signed char)*8);

	printf(">unsigned char\n");
	printf(" Format Specifier: %%c\n");
	printf(" Size: %ldbit\n\n",sizeof(unsigned char)*8);

	printf(">float\n");
	printf(" Format Specifier: %%a.bf\n");
	printf(" Size: %ldbit\n\n",sizeof(float)*8);

	printf(">double\n");
	printf(" Format Specifier: %%lf\n");
	printf(" Size: %ldbit\n\n",sizeof(double)*8);

	printf(">long double\n");
	printf(" Format Specifier: %%Lf\n");
	printf(" Size: %ldbit\n",sizeof(long double)*8);

	return 0;
}