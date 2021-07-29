#include<stdio.h>
//here we use #define for defining macros
#define PI 3.14
#define SQUARE(x) x*x
int main(){
    int input;
    printf("Enter the number: ");
    scanf("%d",&input);
    printf("square of the given no is %d\n",SQUARE(input));
    printf("Area of the given radius is %.2f\n",PI*SQUARE(input));
    return 0;
    
}