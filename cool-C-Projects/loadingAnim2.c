#include<stdio.h>
#include<unistd.h>
void main(void){
    fputs("Loading\t",stdout);
    fflush(stdout);
    for(int i=0;i<5;i++){
        fputs("|",stdout);
        fflush(stdout);
        usleep(1000*500);
        fputs("\b/",stdout);
        fflush(stdout);
        usleep(1000*500);
        fputs("\b-",stdout);
        fflush(stdout);
        usleep(1000*500);
        fputs("\b\\",stdout);
        fflush(stdout);
        usleep(1000*500);
        fputs("\b",stdout);

        
    }
    printf("\n");
    
}