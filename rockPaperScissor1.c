#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
char randomChar(void){
    srand(time(NULL));
    int randomNumber = rand()%3;
    char computerArr[] = {'r','p','s'};
    char computerChoice = computerArr[randomNumber];
    return computerChoice;
}

int compare(char playerChoice, char computerChoice){
    if(playerChoice==computerChoice){
        return 0;
    }
    if(playerChoice=='r' && computerChoice=='s' || playerChoice=='p' && computerChoice=='r' || playerChoice=='s' && computerChoice=='p'){
        return 1;
    }
    if(playerChoice=='r' && computerChoice=='p' || playerChoice=='p' && computerChoice=='s' || playerChoice=='s' && computerChoice=='r'){
        return -1;
    }
}
int main(){

    char playerChoice, computerChoice;
    int pscore=0,cscore=0,result;
    char playerName[20];
    printf("Welcome to Rock-Paper-Scissor\n");
    printf("Enter Your Name: ");
    fgets(playerName,20,stdin);

    for(int i=0;i<3;i++){
        printf("Enter Your Choice\n");
        printf("press 'r' for Rock\n");
        printf("press 'p' for Paper\n");
        printf("press 's' for Scissor\n");
        scanf(" %c",&playerChoice);
        printf("%s: %c\n",playerName,playerChoice);
        computerChoice = randomChar();
        printf("Computer: %c\n",computerChoice);
        result = compare(playerChoice,computerChoice);
        if(result==0){
            printf("Thats a tie\n\n");
        }
        if(result==1){
            printf("You won\n\n");
            pscore+=1;
        }
        if(result==-1){
            printf("You loose\n\n");
            cscore+=1;
        }
    }
    printf("----------------------------------------\n");
    printf("Your Score %d\n",pscore);
    printf("Computer Score %d\n",cscore);
    if(pscore>cscore){
        printf("Congrants! %s, You have won the Match\n",playerName);
    }
    else if(pscore<cscore){
        printf("You have loose the Match\n");
    }
    else{
        printf("Match is a tie\n");
    }
    printf("----------------------------------------\n");
    return 0;
}