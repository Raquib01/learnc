#include<stdio.h>
int main(){
    FILE* ptr = NULL;
    //file opened in append mode
    ptr = fopen("sample.txt","a");
    fprintf(ptr,"_%s","This_content_is_added_additionally");
    fclose(ptr);
    return 0;
}