#include<stdio.h>
#include<stdlib.h>
int main(){
    int *pntr;
    //here we create 3 integer space in heap;
    //we can access it by pntr
    pntr = (int*)malloc(3*sizeof(int));
    pntr[0]=5;
    pntr[1]=7;
    pntr[2]=98;
    printf("%d\n",pntr[1]);
    
    
    //here we re allocate, means increases the size
    pntr = (int*)realloc(pntr,4*sizeof(int));
    pntr[3]=12;
    printf("%d\n",pntr[3]);

    //here we free the space
    free(pntr);

    //here we create 2 integer space in heap by calloc
    pntr = (int*)calloc(2,sizeof(int));
    printf("the initialised value of pntr1 is %d\n",pntr[1]);




    return 0;
}