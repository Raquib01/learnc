#include<stdio.h>
unsigned long int factorial(int n);
int main(void){
//Recursion: function that calls itself
//factorial using recursive approach
	int n;
	printf("Enter the value of n\t");
	scanf("%d",&n);
	printf("The factorial of %d is %lu\n",n,factorial(n));
	return 0;
}

unsigned long int factorial(int n){
	if(n==0){
		return 1;
	}

	return n*factorial(n-1);
}