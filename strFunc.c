#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "khan";
    char s2[] = "raquib";
    char s3[20];
    //strings functions
    //1. strcat: it will add the next string to first one
    puts(strcat(s1,s2));


    //2. strlen: it will return the length of the string
    printf("%d\n",strlen(s2));


    //3. strcpy: it will copy the strings
    strcpy(s3,s1);
    printf("%s\n",s3);


    //4. strcmp: it will compare two srings
    //returns 1 if identical, pos if first string is bigger, neg if first string is smaller(alphabetically)
    printf("%d\n",strcmp(s3,s1));
    return 0;
}