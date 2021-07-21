#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char randomChar(){
    //returning random char r, p or s
    srand(time(NULL));
    int randomNum = rand()%3;
    if(randomNum==0){
        return 'r';
    }
    else if(randomNum==1){
        return 'p';
    }
    else{
        return 's';
    }
}

int compare(char userChoice, char cmpChoice){
    //comparing their choices
    if(userChoice==cmpChoice){
        printf("***Thats a tie***\n");
        return -1;
    }
    if(userChoice=='r' && cmpChoice=='s' || userChoice=='p' && cmpChoice=='r' || userChoice=='s' && cmpChoice=='p'){
        printf("***You Won***\n");
        return 1;
    }
    if(userChoice=='r' && cmpChoice=='p' || userChoice=='p' && cmpChoice=='s' || userChoice=='s' && cmpChoice=='r'){
        printf("***You Loose***\n");
        return 0;
    }
}
int main(){
    //taking name of the user and displaying it
    char userName[20];
    printf("Enter Your Name: ");
    fgets(userName,20,stdin);
    printf("Welcome %s",userName);

    //displaying rules
    printf("Rules:\n");
    printf("Type 'r' for Rock\n");
    printf("Type 'p' for Paper\n");
    printf("Type 's' for Scissor\n");

    // playing 3 rounds
    char userChoice, cmpChoice;
    int userScore=0, cmpScore=0, temp;
    for(int i=0;i<3;i++){
        printf("Your turn: ");
        scanf(" %c",&userChoice);
        cmpChoice = randomChar();
        printf("You: %c | Computer: %c\n",userChoice,cmpChoice);
        temp = compare(userChoice,cmpChoice);
        printf("\n");
        if(temp==0){
            cmpScore++;
        }
        else if(temp==1){
            userScore++;
        }
    }

    //displaying the final score
    printf("Your Score %d\n",userScore);
    printf("Computer Score %d\n",cmpScore);
    if(userScore>cmpScore){
        printf("------You Won the game------\n");
    }
    else if(cmpScore>userScore){
        printf("------You Loose the game------\n");
    }
    else{
        printf("------It was a Tie------\n");
    }
    return 0;
}
