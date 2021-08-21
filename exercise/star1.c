#include<stdio.h>

int tri_ptern(){
/*
Pattern:
*
**
***
****
*/
	int h;
	printf("Enter the height of triangle\t");
	scanf("%d",&h);
	for(int i=0;i<h;i++){
		for(int j=0;j<=i;j++){
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
int rev_tri_ptern(){
/*
Pattern:
****
***
**
*
*/
	int h;
	printf("Enter the height of triangle\t");
	scanf("%d",&h);
	for(int i=0;i<h;i++){
		for(int j=0;j<h-i;j++){
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main(void){
	int n;
	printf("Press 0 for triangular pattern\n");	
	printf("Press 1 for reversed triangular pattern\n");
	scanf("%d",&n);
	if(n==0){
		tri_ptern();
	}
	else if(n==1){
		rev_tri_ptern();
	}
	else{
		printf("Invalid Input\n");
	}
	return 0;
}