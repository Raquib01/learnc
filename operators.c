#include<stdio.h>
int main(void){
	int a = 5,b = 2;
	printf("a is 5 and b is 2\n");
	printf(">Arithmetic Opeartors\n");
	printf(" Addition Opeartor: a+b=%d\n",a+b);
	printf(" Substraction Opeartor: a-b=%d\n",a-b);
	printf(" Multiplication Opeartor: a*b=%d\n",a*b);
	printf(" Division Opeartor: a/b=%d\n",a/b);
	printf(" Modulus Opeartor: a%%b=%d\n\n",a%b);

	printf(">Relational Opearator\n");
	printf(" isEqual %d\n",a==b);
	printf(" isNotEqual %d\n",a!=b);
	printf(" isGreaterThan %d\n",a>b);
	printf(" isGreaterThanOrEqualTo %d\n",a>=b);
	printf(" isLessThan %d\n",a<b);
	printf(" isLessThanOrEqualTo %d\n\n",a<=b);

	printf(">Updation Operators\n");
	printf(" Pre Increment operator ++a \n");
	printf(" Post Increment operator a++ \n");
	printf(" Pre Decrement operator --a \n");
	printf(" Post Decrement operator a-- \n\n");

	printf(">Assignment Operator\n");
	printf(" = is assignment opertor\n\n");

	printf(">Logical Operator\n");
	printf(" And Operator && \n");
	printf(" Or Operator || \n");
	printf(" Not Operator ! \n\n");

	printf(">Bitwise operator\n &(and),|(or),^(exclusive or),~(compliment),<<(left shift),>>(right shift)\n\n");

	printf(">Miscellanous Operator\n");
	printf(" sizeof operator\n");
	printf(" ternary operator\n");
	printf(" & \n");
	printf(" pointer \n");
	return 0;
}