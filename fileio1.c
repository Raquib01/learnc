#include<stdio.h>
int main(){
    char string[40]="My name is Raquib";
    
    //created an Null pointer of type FILE
    FILE* ptr = NULL;
    
    //pointing ptr to fopen in writing mode
    ptr = fopen("sample.txt","w");
    
    //printing string in %s format in file pointing by ptr
    fprintf(ptr,"%s","This_content_is_manually_entered");
    fprintf(ptr,"\n%s",string);
    fclose(ptr);
    return 0;
}