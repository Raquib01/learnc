#include <stdio.h>

int func1(int array[]){
	//here we are making an array having same address as arr in the main function
	array[0] = 13;
	//therefore changes in this array will get reflected in arr of the main function
}

int func2(int* pntr){
	//here we declared a pointer which stores the address of first element of arr
	pntr[0]=9;
	*(pntr+1)= 0;

}
int main(void){
	int arr[] = {2, 5, 7, 22, 15};
	printf("first element of arr is %d\n",arr[0]);
	func1(arr);//we are just passing the address of first element in an array
	printf("After running function1, first element of arr is %d\n",arr[0]);
	func2(arr);
	printf("After running function2, first element and second element of arr is %d and %d\n",arr[0],arr[1]);
	return 0;
}