#include<stdio.h>
//declaring constant using preprocessing command
#define PI 3.14
int main (void){
	//declaring constant using const keyword
	const float g = 9.807;
	printf("value of PI %.2f\n",PI);
	printf("The value of gravity on earth surface is %.3f\n",g);
	return 0;

}