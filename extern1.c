#include<stdio.h>
int main(){
    extern int a;
    printf("the value of a is %d\n",a);
    return 0;
}