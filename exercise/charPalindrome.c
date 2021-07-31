#include<stdio.h>
#include<string.h>
int isPalindrome(char word[15],int length){
    for(int i =0;i<length/2;i++){
        if(word[i]!=word[length-1-i]){
            return 0;
        }
    }
    return 1;

}
int main(){
    //taking word from user
    char word[15];
    printf("Enter a Word: ");
    scanf("%s",word);
    int length = strlen(word);

    //checking
    if(isPalindrome(word,length)){
        printf("---------- \"%s\" is a Palindrome ----------\n",word);
    }
    else{
        printf("---------- \"%s\" is not a Palindrome ----------\n",word);
    }
    return 0;
}