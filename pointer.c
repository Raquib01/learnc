#include<stdio.h>
int main(void){
	//pointer stores the address of an another variable
	int var = 7;
	int* pntr1 = &var;
	int* pntr2 = NULL;
	printf("Address of var using ampersand '&' is %p\n",&var);
	printf("Address of var using pointer variable is %p\n",pntr1);
	printf("value of var using direct method is %d\n",var);
	printf("value of var using derefernce method is %d\n",*pntr1);
	printf("Address of pntr1 is %p\n",&pntr1);
	printf("Address of a NULL pointer pntr2 is %p\n",pntr2);
	return 0;
}