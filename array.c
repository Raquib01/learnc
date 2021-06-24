#include<stdio.h>

int one_d_array(void){
	int arr[]={5,10,15,20,25};
	printf("One D array\n");
	for(int i=0; i<5;i++){
	printf("%d,",arr[i]);
	}
	printf("\n");
	return 0;
}

int two_d_array(void){
	int arr[2][4]={{2,4,6,8},{5,10,15,20}};
	printf("Two D array\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			printf("%d,",arr[i][j]);
		}
	printf("\n");

	}
	return 0;
}
int main(void){
	//array is a collection of data items having same data type
	// 1d array ika list
	one_d_array();
	// 2d array ika matrices / table
	two_d_array();
	return 0;
}