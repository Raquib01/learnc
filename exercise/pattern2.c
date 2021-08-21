/*
Pattern:
* * * * *
*       *
*       *
*       *
* * * * *

00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 40
*/
#include<stdio.h>
int main(){
    int s;
    printf("Enter the length of side: ");
    scanf("%d",&s);
    for(int i = 0; i<s;i++){
        for(int j = 0;j<s;j++){
            if(i>0 && i<s-1 && j>0 && j<s-1){
                printf("  ");
            }
            else{
            printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
