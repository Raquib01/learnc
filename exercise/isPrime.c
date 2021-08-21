#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int isPrime = 1;

    //here we are taking i from 2 to root n, becos we dont need to calc same pair twice
    //eg: 2x6 and 6x2 or 3x8 and 8x3
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(n==1){
        isPrime=0;
    }
    if(isPrime){
        printf("It is a Prime Number\n");
    }
    else{
        printf("It is a Composite Number\n");
    }
    return 0;
}