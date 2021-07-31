#include<stdio.h>
int isPalindrome(int num){
    int temp = num;
    int new=0;
    while(num!=0){
        new = new*10 + num%10;
        num/=10;
    }
    if(new==temp){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(isPalindrome(num)){
        printf("%d is a palindrome\n",num);
    }
    else{
        printf("%d is not a palindrome\n",num);
    }
    return 0;
}