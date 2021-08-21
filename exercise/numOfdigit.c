#include<stdio.h>
int main(){
    long int n;
    int counter=0;
    printf("Enter the digit: ");
    scanf("%ld",&n);
    while(n){
        n/=10;
        counter++;
    }

    printf("The Number of digit is %d\n",counter);
    return 0;
}