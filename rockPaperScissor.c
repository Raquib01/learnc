#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
char printMenu(void){
    char input;
    printf("Press \'r\' for Rock\n");
    printf("Press \'p\' for Paper\n");
    printf("Press \'s\' for Scissor\n");
    printf("Press \'q\' to Quit\n");
    printf("Enter the value:  ");
    scanf(" %c",&input);
    return input;
}

void compare(char input, int computer){
    if(input=='r' && computer==0 || input=='p' && computer==1 || input=='s' && computer==2){
        printf("Thats a Tie\n\n");
    }
    if(input=='r' && computer==2 || input=='p' && computer==0 || input=='s' && computer==1){
        printf("You Won!!!\n\n");
    }
    if(input=='r' && computer==1 || input=='p' && computer==2 || input=='s' && computer==0){
        printf("You Loose..\n\n");
    }
}
int main(void){
    char input = printMenu();
    srand(time(NULL));
    int random = rand()%3;
    char computer[8];
    if(random==0){
        strcpy(computer,"ROCK");
    }
    if(random==1){
        strcpy(computer,"PAPER");
    }
    if(random==2){
        strcpy(computer,"SCISSOR");
    }
    switch(input){
        case 'r':
        printf("--------------------------------------\n\n");
        printf("You: ROCK\n");
        printf("Computer: %s\n",computer);
        compare(input,random);
        printf("--------------------------------------\n");
        main();
        break;
        case 'p':
        printf("--------------------------------------\n");
        printf("You: PAPER\n");
        printf("Computer: %s\n",computer);
        compare(input,random);
        printf("--------------------------------------\n");
        main();
        break;
        case 's':
        printf("--------------------------------------\n");
        printf("You: SCISSOR\n");
        printf("Computer: %s\n",computer);
        compare(input,random);
        printf("--------------------------------------\n");
        main();
        break;
        case 'q':
        printf("Quitting....\n");
        return 0;
        break;
        default:
        break;
    }
    return 0;
}