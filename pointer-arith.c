#include<stdio.h>
int main(void){
	//will learn about pointer arithmetic
	//	1. ++
	//	2. --
	//	3. +
	//	4. -
	//  5. pntr[5]

	//size of int is 4byte therefore ++ means add 4 and -- means minus 4
	int var = 5;
	int* pntr1 = &var;
	printf("Address of pntr1 is %d\n",pntr1);

	pntr1++;
	printf("Address of pntr1++ is %d\n",pntr1);

	pntr1--;//for going back to original value
	pntr1--;
	printf("Address of pntr1-- is %d\n",pntr1);

	pntr1++;//for going back to original value
	printf("Address of pntr1+5 %d\n",pntr1+5);
	
	pntr1-5;//for going back to original value
	printf("Address of pntr1-5 %d\n",pntr1-5);

	return 0;
}