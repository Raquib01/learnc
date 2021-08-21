/*
Pattern:
*****
 ****
  ***
   **
    *
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
        for(int j = 1;j<=(h-i);j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}