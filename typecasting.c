#include<stdio.h>
int main(void){
	//typecasting
	float result = 50/6;
	float result2 = (float)50/6;
	printf("(without typecasting)50 divided by 6 is %f\n",result);
	printf("(with typecasting)50 divided by 6 is %f\n",result2);
	
	return 0;
}