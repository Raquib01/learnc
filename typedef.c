#include<stdio.h>
    //syntax: typedef <old-name> <new-name>
//method 1:
typedef struct worker{
    int id;
    int wages;
}wrkr;
//method 2
// typedef struct worker wrkr;

int main(){
    wrkr w1;
    w1.id = 01;
    w1.wages = 600;
    printf("Id: %d, Wages: %d\n",w1.id,w1.wages);
    return 0;
}