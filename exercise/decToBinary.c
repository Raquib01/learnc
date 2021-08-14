#include<stdio.h>
int main(){
    int rem,n;
    int binaryNum[10];
    printf("Enter the Number(in dec): ");
    scanf("%d",&n);

    int i = 0;
    while(n){
        rem = n%2;
        n/=2;
        binaryNum[i]=rem;
        i++;
    }
    for(int j = i-1;j>=0;j--){
    printf("%d",binaryNum[j]);
    }
    printf("(in binary)\n");
    return 0;
}