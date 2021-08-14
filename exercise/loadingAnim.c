#include<stdio.h>
#include<unistd.h>
void main(void){
    fputs("Loading",stdout);
    fflush(stdout);
    for(int i=0;i<10;i++){
        fputs(".",stdout);
        fflush(stdout);
        usleep(1000*500);
    }
    printf("\n");
    
}