#include <stdio.h>
#include <string.h>
void parser(char *input){
    int check = 0;
    int j = 0;
    for (int i = 0; i < strlen(input); i++){
        if (input[i] == '<'){
            check = 1;
            continue;
        }
        else if (input[i] == '>'){
            check = 0;
            continue;
        }
        if (check == 0){
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';

    //removing unwanted spaces form the beginning
    while (input[0] == ' '){
        for (int l = 0; l < strlen(input); l++){
            input[l] = input[l + 1];
        }
    }

    //removing unwanted space from the ending
    //strlen(input)-1 becos last char is null
    while (input[strlen(input) - 1] == ' '){
        input[strlen(input) - 1] = '\0';
    }
}

int main()
{
    char input[100];
    fgets(input,100,stdin);
    parser(input);
    printf("%s", input);
    return 0;
}