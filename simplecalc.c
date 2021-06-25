//simple calculator using switch
#include<stdio.h>
int main(void){
	float operand1,operand2;
	char operator;
	printf("Enter the operator\t");
	scanf("%c",&operator);
	printf("Enter first operand\t");
	scanf("%f",&operand1);
	printf("Enter second operand\t");
	scanf("%f",&operand2);

	switch(operator){
	case '+':
	printf("%.2f + %.2f = %.2f\n",operand1,operand2,operand1+operand2);
	break;
	case '-':
	printf("%.2f - %.2f = %.2f\n",operand1,operand2,operand1-operand2);
	break;
	case '/':
	printf("%.2f / %.2f = %.2f\n",operand1,operand2,operand1/operand2);
	break;
	case '*':
	printf("%.2f * %.2f = %.2f\n",operand1,operand2,operand1*operand2);
	break;
	case '%':
	printf("%d %% %d = %d\n",(int)operand1,(int)operand2,(int)operand1%(int)operand2);
	//here we used typecasting
	break;
	default:
	printf("Invalid Entry\n");
	}
	return 0;
}