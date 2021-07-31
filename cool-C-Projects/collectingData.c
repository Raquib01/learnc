#include<stdio.h>
int main(){
    //makeing a file pointer and opening a file
    FILE* ptr = NULL;
    ptr = fopen("studentData.txt","a");
    char entry[25];
    
    //taking inputs
    printf("Enter the details:\n");
    
    int i = 1;
    char choice;
    while(1){
        printf("Student%d:\n",i);
        printf("  Name: ");
        scanf("%s",entry);
        fprintf(ptr,"Student%d:\n  Name: %s",i,entry);

        printf("  Email Id: ");
        scanf("%s",entry);
        fprintf(ptr,"\n  Email Id: %s",entry);

        printf("  Mobile No: ");
        scanf("%s",entry);
        fprintf(ptr,"\n  Mobile No.: %s\n",entry);
        fgetc(stdin);
        printf("q for quit, c for continue: ");
        choice=fgetc(stdin);
        if(choice=='q'){
        break;
        }
        i++;
    }
}