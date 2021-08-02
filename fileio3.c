#include<stdio.h>
int main(){
    char string[50];
    FILE* ptr = NULL;
    ptr = fopen("sample.txt","r");
    fscanf(ptr,"%s",string);
    fclose(ptr);
    printf("%s\n",string);
    return 0;
}