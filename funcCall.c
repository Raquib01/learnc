#include<stdio.h>
int func1(int a);
int func2(int* b);
int main(void){
	/*
	we can call function in two ways
		1. call by value
		2. call by reference
	*/

	int x = 3;
	func1(x);	//here x is an argument...we are passing the value of x in func1
	func2(&x);	//here we are passing address of x in func2
	printf("%d",x);
	return 0;
}

int func1(int a){
	a++;
	//here value of x i.e 3 is copied in local var a;
	//therefore a++ will not effect x in the main function
	//this is call by value
	return 0;
}

int func2(int* b){
	(*b)++;
	//here address of x is copied in pointer b
	//therefore b++ will change the value of x in the main function
	//this is call by reference
	return 0;

}