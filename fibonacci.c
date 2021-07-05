#include<stdio.h>

int fibonacci_recursive(int n){
	if(n==1 || n==2){
		return n-1;
	}
	return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}

int fibonacci_iterative(int n){
	int f1 = 0;
	int f2 = 1;
	for(int i=0;i<n-2;i++){
		f2 = f1 + f2;
		f1 = f2 -f1;
	}
	return f2;
}


int main(void){
	//try for 42...
	//iterative will take much less time than recursion
	//becos, here recursion is taking same case 3 times
	int n;
	printf("Enter the value of n\t");
	scanf("%d",&n);
	printf("Using Iterative %d\n",fibonacci_iterative(n));
	printf("Using Recursion %d\n",fibonacci_recursive(n));
}
