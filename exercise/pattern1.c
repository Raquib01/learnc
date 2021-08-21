/*
Pattern:
00000
 1111
  222
   33
    4
*/
#include<stdio.h>
int main(){
    int h;
    printf("Enter the height: ");
    scanf("%d",&h);
    for(int i = 0; i<h;i++){
        for(int k = 0;k<i;k++){
            printf(" ");
        }
        for(int j = h-i;j>=1;j--){
            printf("%d",i);
        }
        printf("\n");

    }    
    return 0;
}