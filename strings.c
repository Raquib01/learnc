#include<stdio.h>
void printString(char str[]){
	int i;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
int main(void){
	//declaring strings
	//Method 1:
		char name1[] = "khan";
	
	//Method 2:
		char name2[] = {'r','a','q','u','i','b','\0'};

	//Method 3(taking input from user):
		char name3[10];
		printf("Enter last name\t");
		fgets(name3,10,stdin);

//------------------------------------------------------------------------------------------------

	//printing strings

	//Method 1 (using printf):
		printf("%s\n",name1);

	//Method 2 (using custom function):
		printString(name2);

	//Method 3 (using puts)
		puts(name3);

	return 0;
}