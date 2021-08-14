#include<stdio.h>
int reverse(int n){
    int rev=0;
    while(n){
        rev=rev*10; //shifting digits to right
        rev=rev+n%10; //adding last digit to rev
        n=n/10; //cutting the last digit
    }
    return rev;
}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Reversed Number is %d\n",reverse(n));
    return 0;
}