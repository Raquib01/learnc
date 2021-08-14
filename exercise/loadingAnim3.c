#include<stdio.h>
#include<unistd.h>
void main(void){
    fputs("Loading\n",stdout);
    fflush(stdout);
    for(int i=0;i<4;i++){
        fputs("oOOOO",stdout);
        fflush(stdout);
        fputs("\r",stdout);
        usleep(1000*500);
        fflush(stdout);
        fputs("OoOOO",stdout);
        fflush(stdout);
        fputs("\r",stdout);
        usleep(1000*500);
        fflush(stdout);
        fputs("OOoOO",stdout);
        fflush(stdout);
        fputs("\r",stdout);
        usleep(1000*500);
        fflush(stdout);
        fputs("OOOoO",stdout);
        fflush(stdout);
        fputs("\r",stdout);
        usleep(1000*500);
        fflush(stdout);
        fputs("OOOOo",stdout);
        fflush(stdout);
        fputs("\r",stdout);
        usleep(1000*500);
        fflush(stdout);
    }
    
}