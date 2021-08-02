#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the word: ");
    scanf("%s",str);
    int c;
    //array of 26 initialised with 0
    static int arr[25];

    //updating array for having num of occurence in it
    for(int i = 0;i<strlen(str);i++){
        c = str[i];
        arr[c-97]++;
    }

    int max = -1;
    char maxAlpha;
    for(int i =0;i<26;i++){
        if(max<arr[i]){
            max=arr[i];
            maxAlpha=97+i;
        }
    }
    printf("Alphabet \'%c\' occurs %d times(max occurence)\n",maxAlpha,max);
    return 0;
}