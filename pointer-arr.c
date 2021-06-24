#include<stdio.h>
int main(void){
	int arr[] = {7,1,8,0,2,5};
	//using traditional method
	printf("The first element in an array is %d\n",arr[0]);
	printf("The second element in an array is %d\n",arr[1]);
	printf("The third element in an array is %d\n",arr[2]);

	//using dereference method
	printf("The first element in an array is %d\n",*arr);
	printf("The first element in an array is %d\n",*(arr+1));
	printf("The first element in an array is %d\n",*(arr+2));

	//using '*' and '&'
	printf("The value at address of first element is %d\n",*(&arr[0]));

	//address using '&;
	printf("The address of first element in an array is %p\n",&arr[0]);
	printf("The address of second element in an array is %p\n",&arr[1]);
	printf("The address of third element in an array is %p\n",&arr[2]);

	//address using direct pointer method
	printf("The address of first element in an array is %p\n",arr);
	printf("The address of first element in an array is %p\n",arr+1);
	printf("The address of first element in an array is %p\n",arr+2);

	//you cant use arr++ as arr is constant pointer pointing towards first element of array
	//you have to store it in another pointer and then increment that pointer
	return 0;
}